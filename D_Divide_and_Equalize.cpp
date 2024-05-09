#include <bits/stdc++.h>
using namespace std;
#define int long long



string canMakeEqualArray(int n, vector<int>& a) {
    
     unordered_map<int,int>mp;
      
       for (int i = 0; i < n; i++) {
           int x=a[i];
            for (int j = 2; j * j <= x; j++) {
                while (x % j == 0) {
                    x /= j;
                    mp[j]++;
                }
            }
            if (x != 1) {
                mp[x]++;
            }
        }
   for(auto it:mp){
    int y=it.second;
    if(y%n!=0){
      return "NO";
    }
   }
    return "YES";
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string result = canMakeEqualArray(n, a);
        cout << result << endl;
    }

    return 0;
}
