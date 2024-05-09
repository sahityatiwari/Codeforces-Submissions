#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        int ans = 1;
        while (1)
        {
            if (n % ans == 0)
                ans++;
            else
                break;
        }
        ans--;
        cout << ans << endl;
    }

    return 0;
}
