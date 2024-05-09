#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x = 1;
        cin >> n >> k;

        while (true) {
        int o = (n + 1) / 2;
            if (k <= o) {
                int ans = (k - 1) * 2 + 1;
                if (x == 0)
                    cout << ans * 1 << endl;
                else
                    cout << ans * x << endl;
                break; 
            } else {
                k -= o;
            }
            x *= 2;
            n /= 2;
        }
    }
    return 0;
}

