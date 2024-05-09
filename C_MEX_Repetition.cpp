#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> applyOperations(int n, int k, vector<int> &a)
{
    vector<int> ans(n);
    vector<int> c(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        c[a[i]] = -1;
    }

    int x;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == 0)
        {
            x = i;
            break;
        }
    }

    int y;
    if (k >= n)
    {
        y = k % (n + 1) - 1;
    }
    else
    {
        y = k - 1;
    }

    ans[y] = x;
    int z = n - 1;

    for (int i = y - 1; i >= 0; i--)
    {
        ans[i] = a[z];
        z--;
    }

    int b = 0;
    for (int i = y + 1; i < n; i++)
    {
        ans[i] = a[b];
        b++;
    }

    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> result = applyOperations(n, k, arr);

        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
