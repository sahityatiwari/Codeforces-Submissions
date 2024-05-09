#include <bits/stdc++.h>
using namespace std;

#define int long long

int maxExperience(int n, int k, vector<int> &a, vector<int> &b) {
    vector<int> exp(n);

    for (int i = 0; i < n; ++i) {
        exp[i] = a[i] - b[i];
        if (i > 0) {
            exp[i] += exp[i - 1];
        }
    }

    int maxExp = 0;

    for (int i = 0; i < n; ++i) {
        int totalExp = max(0LL, exp[i]);
        if (i + k < n) {
            totalExp += exp[i + k];
        }
        maxExp = max(maxExp, totalExp);
    }

    return maxExp;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        int result = maxExperience(n, k, a, b);
        cout << result << "\n";
    }

    return 0;
}
