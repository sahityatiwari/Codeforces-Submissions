
#include <bits/stdc++.h>
using namespace std;

#define int long long

string checkIfCharacterExists(char c) {
    
    string s = "codeforces";
    for(int i =0; i< s.size() ; i++){
        if(s[i] == c)
        return "YES";
    }
    return "NO";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        char c;
        cin >> c;

        string result = checkIfCharacterExists(c);
        cout << result << "\n";
    }

    return 0;
}
