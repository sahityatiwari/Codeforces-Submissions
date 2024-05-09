#include <bits/stdc++.h>
using namespace std;

#define int long long

int minimumMovesToMakeStudentsHappy(vector<int>& p) {
    
    

}

signed main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        int moves = minimumMovesToMakeStudentsHappy(p);
        cout << moves << endl;
    }

    return 0;
}
