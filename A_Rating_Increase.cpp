#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;

        int n = a.size();
        int x = n / 2;
        int y;
        string first = "";
        for (int i = 0; i < x; i++)
        {
            if (a[i + 1] != '0')
            {
                first += a[i];
                y = i + 1;
                break;
            }
            else
                first += a[i];
        }
        string second = "";
        for (int i = y; i < n; i++)
            second += a[i];

        if (first < second || first.size() < second.size())
        {
            cout << first << " " << second << "\n";
        }
        else
            cout << -1 << endl;
    }

    return 0;
}
