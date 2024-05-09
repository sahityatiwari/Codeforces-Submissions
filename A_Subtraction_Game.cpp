#include <bits/stdc++.h>
using namespace std;
#define int long long

int findWinningN(int a, int b)
{

    if (a > 1)
        return 1;

    else if (a == 1)
    {
        return b + 1;
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int n = findWinningN(a, b);
        cout << n << "\n";
    }

    return 0;
}
