#include <bits/stdc++.h>
using namespace std;
#define int long long

int maximumValueOfK(int n, vector<pair<int, int>>& traps) {

    int mini = INT_MAX;


    
    for(int i =0; i < traps.size(); i++ ){
        int x = traps[i].first + (traps[i].second - 1)/2;
        mini = min(x, mini);

    }

    return mini;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> traps;
        for (int i = 0; i < n; i++) {
            int di, si;
            cin >> di >> si;
            traps.push_back({di, si});
        }
        
        int result = maximumValueOfK(n, traps);
        cout << result << endl;
    }

    return 0;
}
