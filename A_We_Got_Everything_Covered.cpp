#include <bits/stdc++.h>
using namespace std;
#define int long long

string generateString(int n, int k) {
    string ans = "";
    for(int i = 1; i <= n; i++  ){
        char ch = 'a';
        for(int j =0; j < k; j++){
            ans += ch;
            ch++;
        }
    }
    return ans;
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        cout << generateString(n, k) << endl;
    }

    return 0;
}
