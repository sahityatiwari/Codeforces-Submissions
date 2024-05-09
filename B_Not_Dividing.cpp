#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> solveTest(int n, vector<int> &a)
{
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            a[i]++;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] % a[i] == 0)
        {
            a[i + 1]++;
        }
    }

    return a;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        vector<int> result = solveTest(n, arr);

        for (int i = 0; i < n; ++i)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
