#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> findPermutation(const vector<int>& a);

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

        vector<int> b = findPermutation(a);

        // Output the permutation b
        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

vector<int> findPermutation(const vector<int>& a) {
    
    vector<int> b;
    int n = a.size();
    for(int i =0; i< n; i++){
        int x = n -a[i] +1;
        b.push_back(x);
    }
    return b;
}
