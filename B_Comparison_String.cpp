#include <bits/stdc++.h>
using namespace std;

#define int long long

int calculateMinimumCost(int n, string s)
{

    int l = 0, g = 0, ml = 0, mg = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '<')
        {
            l++;
            ml = max(ml, l);
            g = 0;
        }
        else
        {
            g++;
            mg = max(mg, g);
            l = 0;
        }
    }
    return max(ml,mg)+1;
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

        int result = calculateMinimumCost(n, s);
        cout << result << endl;
    }

    return 0;
}
