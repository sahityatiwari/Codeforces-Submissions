#include <bits/stdc++.h>
using namespace std;
#define int long long

void rotateMatrix180(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; ++i) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    reverse(matrix.begin(),matrix.end());
}

bool canMatchRotation(const vector<vector<int>> &p, const vector<vector<int>> &s, int n, int k) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (p[i][j] != s[i][j]) count++;
        }
    }
    count /= 2;
    if (count > k) return false;
    int z = abs(count - k);
    if(n&1){
        return 1;
    }
    return z % 2 == 0;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> pattern(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> pattern[i][j];
            }
        }
        vector<vector<int>> pattern1=pattern;
       rotateMatrix180(pattern1);
        if (canMatchRotation(pattern1, pattern, n, k)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
