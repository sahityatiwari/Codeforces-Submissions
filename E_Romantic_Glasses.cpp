#include <bits/stdc++.h>
using namespace std;
#define int long long

string findSubarray(int n, vector<int> &a) {
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum1 += a[i];
        } else {
            sum2 += a[i];
        }
    }

    int prefix_sum1 = 0, prefix_sum2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum1 -= a[i];
        } else {
            sum2 -= a[i];
        }

        if (prefix_sum1 + sum1 == prefix_sum2 + sum2) {
            return "YES";
        }

        if (i % 2 == 0) {
            prefix_sum1 += a[i];
        } else {
            prefix_sum2 += a[i];
        }
    }

    return "NO";
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> juice(n);
        for (int i = 0; i < n; ++i) {
            cin >> juice[i];
        }

        string result = findSubarray(n, juice);

        cout << result << endl;
    }

    return 0;
}
