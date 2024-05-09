#include <bits/stdc++.h>
using namespace std;
#define int long long

string minimizeCostBinaryString(string &a)
{

    int n = a.size();
    if (a[0] == '?')
    {
        a[0] = '0';
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] == '?')
        {
            a[i] = a[i - 1];
        }
    }
    return a;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string result = minimizeCostBinaryString(s);
        cout << result << "\n";
    }

    return 0;
}
