#include <bits/stdc++.h>
using namespace std;

#define int long long

int countDifferences(const string &s);

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << countDifferences(s) << endl;
    }

    return 0;
}

int countDifferences(const string &s)
{
    string a = "codeforces";
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (a[i] != s[i])
            count++;
    }
    return count;
}
