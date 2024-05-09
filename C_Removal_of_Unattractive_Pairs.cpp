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
        int n;
        cin >> n;

        string s;
        cin >> s;

        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]] = 0;
        }
        int maxim = 0;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
            maxim = max(maxim, mp[s[i]]);
        }

        int rem = n - maxim;

        if (rem >= maxim && n % 2 == 0)
        {

            cout << 0 << "\n";
        }
        else if (rem > maxim && n % 2 != 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << maxim - rem << "\n";
        }
    }

    return 0;
}
