#include <bits/stdc++.h>
using namespace std;
#define int long long

int shortestRepeatingSubstring(const string &s)
{
    int n = s.length();

    string a = "";
    string b = "";
    
    b += s[0];
    int count = 1;
  
    for (int i = 1; i < n; i++)
    {
        if(b[0] != s[i]){
              count++;
              b += s[i];
        }

    }
    return b.size();
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << shortestRepeatingSubstring(s) << endl;
    }
    return 0;
}
