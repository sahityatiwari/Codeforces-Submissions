#include <bits/stdc++.h>
using namespace std;

#define int long long

bool checkTemplate(int n, const string &a, const string &b, const string &c)
{
    int ct = 0;
    int i = 0;
    while (i < n)
    {
        if (a[i] == c[i])
        {
            ct++;
        }
        else if (b[i] == c[i])
        {
            ct++;
        }
        i++;
    }
    if (ct != n)
        return true;
    else
        return false;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string a, b, c;
        cin >> a >> b >> c;

        if (checkTemplate(n, a, b, c))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
