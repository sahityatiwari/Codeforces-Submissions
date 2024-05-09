#include <bits/stdc++.h>
using namespace std;

#define int long long

string generateRegularBracketSequence(const string &s)
{

    int g = 0;
    int n = s.size();
    for (int i = 0; i < n - 1; ++i)
    {
        if ((s[i] == '(' && s[i + 1] == '(') || (s[i] == ')' && s[i + 1] == ')'))
        {
            g = 1;
        }
    }

    string ans = "";

    if (g == 1)
    {
        for (int i = 0; i < n; ++i)
        {

            ans += "()";
        }
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {

            ans += '(';
        }
        for (int i = 0; i < n; ++i)
        {

            ans += ')';
        }
    }
    return ans;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s == "()")
        {
            cout << "NO" << endl;
        }
        else
        {
            string result = generateRegularBracketSequence(s);
            cout << "YES" << endl
                 << result << endl;
        }
    }

    return 0;
}
