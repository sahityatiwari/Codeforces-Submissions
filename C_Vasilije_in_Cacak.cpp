#include <bits/stdc++.h>
using namespace std;
#define int long long

bool canChooseNumbers(int n, int k, int x)
{

    int sum = n * (n + 1) / 2;
    if (sum < x)
        return false;

    else
    {
        int fk = k * (k + 1) / 2;
        int fnk = (n-k)*(n-k+1)/2;
        int left = sum -fnk;
        if (fk > x || left <  x )
            return false;
        else
            return true;
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
        int n, k, x;
        cin >> n >> k >> x;

        if (canChooseNumbers(n, k, x))
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
