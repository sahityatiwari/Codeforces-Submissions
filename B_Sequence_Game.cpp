#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> reconstructSequence(int n, vector<int>& b) {
    
    vector<int> v;
    v.push_back(b[0]);

    for(int i = 1; i< n ; i++){
        
        if(b[i-1] <= b[i] )
        v.push_back(b[i]);
        else{
            v.push_back(b[i]);
            v.push_back(b[i]);
        }
    }
return v;
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> a = reconstructSequence(n, b);

        cout << a.size() << endl;
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
