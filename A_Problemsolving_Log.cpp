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

        string a;
        cin >> a;

        unordered_map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        set<char> s;
        for (char ch : a)
        {
            s.insert(ch);
        }
        int count = 0;
        for (char ch : s)
        {
            if (mp[ch] >= ch - 'A' + 1)
                count++;
        }
        cout << count << "\n";
    }

    return 0;
}
