#include <bits/stdc++.h>
using namespace std;

#define int long long

int solve(string a)
{
    int ans = 0;

    int c0 = 0, c1 = 0;
    int n = a.size();
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '0')
            c0++;
        else
            c1++;
    }

    if (c1 == c0)
        return 0;
    else
    {
        string t = "";

        if (c0 < c1)
        {
            int i = 0;
            while (i < n)
            {
                if (a[i] == '1' && c0 > 0)
                {
                    t += '0';
                    c0--;
                }
                else
                {
                    t += '1';
                }
                i++;
            }
        }
        else if (c0 > c1)
        {
            int i = 0;
            while (i < n)
            {
                if (a[i] == '0' && c1 > 0)
                {
                    t += '1';
                    c1--;
                }
                else
                {
                    t += '0';
                }
                i++;
            }
        }

        int i = 0;
        int j = 0;
        while (i < n && j < n)
        {
            if (a[i] != t[i])
            {
                i++;
                j++;
            }
            else
            {
                j++;
                ans++;
            }
        }
    }
    return ans;
}

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

        int result = solve(a);
        cout << result << "\n";
    }

    return 0;
}





