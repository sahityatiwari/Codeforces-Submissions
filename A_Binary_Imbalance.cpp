#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n, string s)
{

    int z = 0, o = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            z++;
        }
    }

    if (z == o)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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

        solve(n, s);
    }
    return 0;
}
