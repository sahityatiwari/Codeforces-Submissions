#include <bits/stdc++.h>
using namespace std;

#define int long long

int maxSumMEXArray(int n, int k, int x)
{
    int sum = 0;
    if (n >= k && x - k >= -1)
    {
        for (int i = 0; i < k; i++)
        {
            sum += i;
        }
        if (x == k)
            return sum + (n - k) * (x - 1);
        else
            return sum + (n - k) * x;
    }
    else
        return -1;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        int result = maxSumMEXArray(n, k, x);

        cout << result << endl;
    }

    return 0;
}
