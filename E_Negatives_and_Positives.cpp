#include <bits/stdc++.h>
using namespace std;

#define int long long

int solveTest(int n, vector<int> &a)
{

    int sum = 0, neg = 0, mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0)
        {
            neg++;
        }
        mini = min(mini, abs(a[i]));

        sum += abs(a[i]);
    }
    if (neg % 2 != 0)
    {
        return sum - 2 * mini;
    }
    else
        return sum;
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

        int result = solveTest(n, arr);
        cout << result << "\n";
    }

    return 0;
}
