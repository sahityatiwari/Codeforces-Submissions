#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n, string s)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        if (s[i] == 'B')
            break;
    }
    int j;
    for (j = n - 1; j >= 0; j--)
    {
        if (s[j] == 'B')
            break;
    }
    return j - i +1;
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

        cout << solve(n, s) << endl;
    }

    return 0;
}
