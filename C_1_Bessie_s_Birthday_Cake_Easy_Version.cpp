#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxTriangularPieces(int n, int x) {
    // If Bessie hasn't chosen any vertices, we can choose at most n/2 additional vertices
    if (x == 0) {
        return n / 2;
    }
    // If Bessie has chosen some vertices, we can choose at most (n - x) additional vertices
    return min(n - x, x - 1);
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        
        int result = maxTriangularPieces(n, x);
        cout << result << endl;
    }

    return 0;
}
