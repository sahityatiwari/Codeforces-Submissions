#include <bits/stdc++.h>
using namespace std;
#define int long long

int minimumOperations(int n, string s, string f)
{
    int c1s = 0, c2s = 0, eq = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            c1s++;
        if (f[i] == '1')
        {
            c2s++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (f[i] == '1' && s[i] != '1')
            eq++;
    }
    int sum = 0;
    if (c1s > c2s)
    {
        sum += (c1s - c2s);
        sum += eq;
    }
    else if (c2s < c1s)
    {
        eq = eq - (c2s - c1s);
        sum += c2s - c1s;
        sum += eq;
    }
    else
    {
        sum += eq;
    }
    return sum;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s, f;
        cin >> s >> f;

        int result = minimumOperations(n, s, f);
        cout << result << endl;
    }

    return 0;
}
