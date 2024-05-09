#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxTotalPower(int n, vector<int> &a) {
      priority_queue<int> gq;
    int sum = 0;

    // Initially push a non-zero value to avoid potential issues
    gq.push(0);

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            gq.push(a[i]);
        } else {
            if (!gq.empty()) {
                sum += gq.top();
                gq.pop();
            }
        }
    }

    return sum;
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> powers(n);
        for (int i = 0; i < n; i++) {
            cin >> powers[i];
        }

        int result = maxTotalPower(n, powers);

        cout << result << "\n";
    }

    return 0;
}
