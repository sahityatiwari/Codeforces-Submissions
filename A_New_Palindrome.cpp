#include <bits/stdc++.h>
using namespace std;

#define int long long

string canRearrangeToGetPalindrome(const string &s);

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << canRearrangeToGetPalindrome(s) << endl;
    }

    return 0;
}

string canRearrangeToGetPalindrome(const string &s)
{
    int n = s.size();
    unordered_map<char, int> m;
    int count = 0;

    for (int c = 0; c <= n - 1; c++)
    {
        m[s[c]] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
        if (m[s[i]] == 2)
            count++;
    }
    if (count >= 2)
        return "YES";
    else
        return "NO";
}
