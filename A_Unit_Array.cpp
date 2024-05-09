#include <bits/stdc++.h>
using namespace std;

#define int long long

int minOperationsToMakeGoodArray(int n, vector<int> &a)
{

    int cn = 0;
    int cp = 0;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
            cn++;
    }
    cp = n - cn;
    int ans;
    if (n % 2 == 0)
        x = n / 2;
    else
        x = n / 2 + 1;

    if (cn < cp && cn%2 == 0)
        return 0;
    else if( cn < cp && cn%2 != 0)
    return 1;    
    else
    {
        ans = x - cp;
        if ((cn - ans) % 2 == 0)
            return ans;
        else
            return ans + 1;
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int operations = minOperationsToMakeGoodArray(n, a);
        cout << operations << endl;
    }

    return 0;
}
