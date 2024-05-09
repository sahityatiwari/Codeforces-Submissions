#include <bits/stdc++.h>
using namespace std;
#define int long long

string splitIntoSyllables(int n, string &word) {
    string result = "";
    int i = 0;

    while (i < n) {
        if (i + 3 < n && (word[i + 3] == 'b' || word[i + 3] == 'c' || word[i + 3] == 'd' )) {
        
            result += word.substr(i, 3) + ".";
            i += 3;
        }
        else if(i+3 == n ){
             result += word.substr(i, 3) + ".";
             break;
        }

         else {         
            result += word.substr(i, 2) + ".";
            i += 2;
        }
    }

    return result.substr(0, result.length() - 1); // Remove the last dot
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string word;
        cin >> word;

        string result = splitIntoSyllables(n, word);

        cout << result << endl;
    }

    return 0;
}
