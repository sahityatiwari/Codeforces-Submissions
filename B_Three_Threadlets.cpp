#include <bits/stdc++.h>
using namespace std;
#define int long long

bool canMakeEqualLength(int a, int b, int c)
{

    int mini = min(a, min(b, c));
    int maxi = max(a, max(b, c));
    int sec = a + b + c - mini - maxi;

    if (maxi % mini != 0 || sec % mini != 0)
        return false;

    else
    {
        if ((maxi / mini + sec / mini - 2) <= 3)
            return true;
        else
            return false;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (canMakeEqualLength(a, b, c))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
