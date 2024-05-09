#include <bits/stdc++.h>
using namespace std;
#define int long long

int findOddOneOut(int a, int b, int c) {
    if (a == b) {
        return c;
    } else if (b == c) {
        return a;
    } else {
        return b;
    }
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int result = findOddOneOut(a, b, c);

        cout << result << endl;
    }

    return 0;
}
