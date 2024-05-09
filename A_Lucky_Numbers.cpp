#include <bits/stdc++.h>
using namespace std;
#define int long long

int findLuckiestStarship(int l, int r)
{
    int ans = INT_MIN;
    int x;
    int ii = max(l,r-100);
    for (int i = ii; i <= r; i++)
    {
        int a = i; 
        int maxi = 0;
        int mini = 9;
        while (a > 0)
        {
            int y = a % 10;
            maxi = max(maxi, y);
            mini = min(mini, y);
            a /= 10;
        }
        if (ans <= abs(maxi - mini))
        {
            ans = abs(maxi - mini);
            x = i;
        }
    }
    return x;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int result = findLuckiestStarship(l, r);

        cout << result << "\n";
    }

    return 0;
}
