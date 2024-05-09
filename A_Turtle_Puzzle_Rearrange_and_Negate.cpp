#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxSumAfterOperations(vector<int> &a) {
    int sum =0;
    for(int i: a){
        sum += abs(i);
    }
    return sum;
}

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
        cout << maxSumAfterOperations(a) << endl;
    }
    return 0;
}
