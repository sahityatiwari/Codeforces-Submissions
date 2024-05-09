#include <bits/stdc++.h>
using namespace std;

#define int long long

pair<vector<int>, vector<int>> splitArrays(vector<int>& a) {
    
    vector<int> b, c;
    int count = 0;
     int n =  a.size();
    sort(a.begin(), a.end());
    for(int i = n-1; i>= 0 ;i--){
         if(a[i] == a[n-1] )
         count ++;
         else
         break;
    }

    for(int i  = 0; i< n-count; i++){
        b.push_back(a[i]);
    }

    for(int i =0 ; i < count; i++){
        c.push_back(a[n-1]);
    }


    return make_pair(b, c);
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
        
        pair<vector<int>, vector<int>> result = splitArrays(a);
        vector<int> b = result.first;
        vector<int> c = result.second;

        if (b.empty() || c.empty()) {
            cout << -1 <<endl;
        } else {
            int lb = b.size();
            int lc = c.size();
            cout << lb << ' ' << lc <<endl;
            
            for (int i = 0; i < lb; i++) {
                cout << b[i] << ' ';
            }
            cout <<endl;

            for (int i = 0; i < lc; i++) {
                cout << c[i] << ' ';
            }
            cout <<endl;
        }
    }

    return 0;
}
