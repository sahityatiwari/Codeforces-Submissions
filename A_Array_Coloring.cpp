#include <bits/stdc++.h>
using namespace std;

#define int long long

string canColorArray(vector<int>& a) {
    
    int count = 0;
    for(int i = 0; i< a.size() ; i++){
        if(a[i] % 2 !=  0)
        count ++;
    }
    if(count % 2 == 0)
    return "YES"; 
    else
    return "NO";
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
        
        string result = canColorArray(a);
        cout << result << endl;
    }

    return 0;
}
