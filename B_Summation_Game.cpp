#include <bits/stdc++.h>
using namespace std;

#define int long long

int solve(int n, int k, int x, vector<int> &arr)
{
    if (n == 1 || (n == 2 && k > 1))
        return 0;
    int j;
    if (x + k >= n)
        j = 0;
    else
        j = n - x - k - 1;
    int pos = 0;

    sort(arr.begin(), arr.end());

    if (n == 2 && k == 1 && x == 2)
        return -1 * arr[0];
    if (n == 2 && k == 1 && x == 1)
        return max(-1 * arr[0], arr[0] - arr[1]);

    int neg = 0;
    for (int i = j; i < j + x; i++)
    {
        neg += arr[i];
    }

    for (int i = 0; i < j; i++)
    {
        pos += arr[i];
    }
    int suma = pos - neg;

    for (int i = j; i < n - x; i++)
    {
        neg = neg - arr[i] + arr[i + x];
        pos += arr[i];
        suma = max(suma, pos - neg);
    }
    if (k >= n && suma < 0)
        return 0;
    else
        return suma;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        cout << solve(n, k, x, arr) << '\n';
    }

    return 0;
}

