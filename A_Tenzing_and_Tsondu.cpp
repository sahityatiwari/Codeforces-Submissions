#include <bits/stdc++.h>
using namespace std;

#define int long long

string solve(int n, int m, vector<int> &a, vector<int> &b)
{
    int suma = 0, sumb = 0;

    for (int i = 0; i < n; i++)
    {
        suma = a[i] + suma;
    }
    for (int i = 0; i < m; i++)
    {
        sumb = b[i] + sumb;
    }

    if (suma > sumb)
        return "Tsondu";
    else if (suma < sumb)
        return "Tenzing";
    else
        return "Draw";
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> tsondu(n);
        vector<int> tenzing(m);

        for (int i = 0; i < n; ++i)
        {
            cin >> tsondu[i];
        }

        for (int i = 0; i < m; ++i)
        {
            cin >> tenzing[i];
        }

        string result = solve(n, m, tsondu, tenzing);
        cout << result << "\n";
    }

    return 0;
}
