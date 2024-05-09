#include <bits/stdc++.h>
using namespace std;
#define int long long

int countBeautifulPairs(int n, int x, int y, vector<int> &a) {

    
    
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << countBeautifulPairs(n, x, y, a) << endl;
    }
    return 0;
}
