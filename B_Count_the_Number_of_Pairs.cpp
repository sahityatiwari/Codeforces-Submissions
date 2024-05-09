#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxBurles(int n, int k, string &s)
{

    unordered_map<char, pair<int, int>> lm;

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (islower(ch))
        {
            lm[ch].first++;
        }
        else
            lm[(char)tolower(ch)].second++;
    }
    int ans = 0, sum = 0;
    for (int i = 0; i < lm.size(); i++)
    {
        ans += min(lm[i].first, lm[i].second);
        sum += abs(lm[i].first - lm[i].second) / 2;
    }

    if (sum >= k)
        return ans + k;
    else
        return ans + sum;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int result = maxBurles(n, k, s);

        cout << result << "\n";
    }

    return 0;
}
