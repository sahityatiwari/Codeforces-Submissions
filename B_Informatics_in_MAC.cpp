#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Find the maximum MEX value
    int max_mex = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] != max_mex) {
            max_mex = i;
            break;
        }
    }

    // Check if there exists a subsegment with MEX value equal to max_mex
    bool found = false;
    for (int i = max_mex + 1; i < n; ++i) {
        if (a[i] == max_mex) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "2\n1 " << max_mex + 1 << "\n" << max_mex + 2 << " " << n << "\n";
    } else {
        cout << "-1\n";
    }
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
