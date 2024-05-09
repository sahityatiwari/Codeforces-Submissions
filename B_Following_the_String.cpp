#include <bits/stdc++.h>
using namespace std;
#define int long long

string solve(int n, vector<int>& a) {
string ans = "";
    unordered_map<int, pair<int, char>>m;
    for(int i =0; i< n; i++){
        m[a[i]].first++;
        m[a[i]].second = 'a';
    }
    for(int i =0; i< n; i++){
        m[a[i]].first--;
        ans += m[a[i]].second;       
        m[a[i]].second  ++;
    }
return ans;
    
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> trace(n);
        for (int i = 0; i < n; ++i) {
            cin >> trace[i];
        }

        cout << solve(n, trace) << endl;
    }

    return 0;
}
