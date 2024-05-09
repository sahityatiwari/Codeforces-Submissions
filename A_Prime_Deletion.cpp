#include <bits/stdc++.h>
using namespace std;

#define int long long

string obtainPrimeSequence(string s) {
    string t;

    for(int i =0; i< 9; i++){
        if(s[i] == '1')
        t += '1';
        else if(s[i] == '3')
        t+= '3';
    }
    return t;
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string result = obtainPrimeSequence(s);

        cout << result << endl;
    }

    return 0;
}
