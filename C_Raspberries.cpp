#include <bits/stdc++.h>
using namespace std;

#define int long long

int minOperations(int n, int k, vector<int> &a)
{
    int count = 0, z, b = 0;

    if (k == 4)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 4 == 0)
            {
                return 0;
            }
            else if (a[i] % 4 == 2)
            {
                b++;
                if (b == 2)
                    return 0;
            }
            else if (a[i] % 4 == 1)
                count++;
            else if (a[i] % 4 == 3)
                z = 3;
        }
        if (z == 3)
            return 1;
        else if (count >= 1 && b >= 1)
            return 1;
        else if (count >= 2 && b == 0)
            return 2;
    }
    else
    {
        int mini = INT_MAX;
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % k == 0)
            {
                return 0;
            }
            int x = a[i] / k + 1;
            int temp = x * k - a[i];
            mini = min(mini, temp);
        }

        return mini;
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << minOperations(n, k, a) << endl;
    }
    return 0;
}
