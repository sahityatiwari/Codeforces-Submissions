#include <bits/stdc++.h>
using namespace std;
#define int long long

char findMostFrequentCharacter(const string &s) {
    int c1 =0, c2 =0;
    for (int i =0; i< s.size(); i++){
        if(s[i] == 'A')
        c1++;
        else c2++;
    }
    if(c1 > c2)
     return 'A';
     else return 'B';
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char mostFrequent = findMostFrequentCharacter(s);
        cout << mostFrequent << "\n";
    }
    return 0;
}
