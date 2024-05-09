#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isBinaryDecimal(int num) {
    if (num == 0 || num == 1) return true;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1) {
            return false;
        }
        num /= 10;
    }
    return true;
}

bool canRepresentProduct(int n) {
    if (isBinaryDecimal(n)) {
        return true;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            if (isBinaryDecimal(i) && isBinaryDecimal(n / i)) {
                return true;
            }
        }
    }
    return false;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << "YES" << endl;
        } else {
            int sqrtN = sqrt(n);
            if (sqrtN * sqrtN == n && !isBinaryDecimal(sqrtN)) {
                cout << "NO" << endl;
            } else {
                cout << (canRepresentProduct(n) ? "YES" : "NO") << endl;
            }
        }
    }
    return 0;
}
