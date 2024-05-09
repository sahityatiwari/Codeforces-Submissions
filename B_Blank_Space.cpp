#include <bits/stdc++.h>
using namespace std;

#define int long long

int findLongestBlankSpace(int n, vector<int>& a);

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << findLongestBlankSpace(n, a) << endl;
    }

    return 0;
}

int findLongestBlankSpace(int n, vector<int>& a) {
    int count = 0;
    int maxi =0;
    for(int i =0; i< n; i++){
        if(a[i] == 0)
        {
            count++;
            maxi = max(maxi,count);

        }
        else
        count =0;
    }
    return maxi;
}
