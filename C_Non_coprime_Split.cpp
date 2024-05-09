#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

pair<int, int> findNumbers(int l, int r)
{
    if (l < 4 && r < 4)
        return {-1, -1};
    if ((l == 1 && r > 4) || (r == 1 && l > 4))
        return {2, 2};
    if (r % 2 == 0 || l % 2 == 0 && l > 2 && r > 2)
    {
        if (r % 2 == 0)
            return {r / 2, r / 2};
        else
            return {l / 2, l / 2};
    }
    bool lp = 0, rp = 0;
    int x = l;
    if (isPrime(l))
    {
        lp = 1;
    }
    else
    {
        x = l;
    }
    if (isPrime(r))
    {
        rp = 1;
    }
    else
    {
        x = r;
    }
    if (lp && rp && l == r)
    {
        return {-1, -1};
    }
    else if (lp && rp && l != r)
    {
        r--;
        return {r / 2, r / 2};
    }

    for (int i = 3; i <= x; i += 2)
    {
        if (x % i == 0)
        {
            return {i, x - i};
        }
    }
    return {-1, -1};
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        pair<int, int> result = findNumbers(l, r);

        if (result.first == -1)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << result.first << " " << result.second << "\n";
        }
    }

    return 0;
}
