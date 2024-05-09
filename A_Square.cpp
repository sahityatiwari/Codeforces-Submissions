#include <bits/stdc++.h>
using namespace std;
#define int long long

int calculateSquareArea(vector<int> x, vector<int> y) {
    sort (x.begin(), x.end());
    sort (y.begin(), y.end());

    int side = max(x[2] - x[1], y[2] - y[1]);
        int area = side * side;
        return area;
}
signed main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> x(4), y(4);

        for (int i = 0; i < 4; ++i) {
            cin >> x[i] >> y[i];
        }

        int result = calculateSquareArea(x, y);
        cout << result << endl;
    }

    return 0;
}
