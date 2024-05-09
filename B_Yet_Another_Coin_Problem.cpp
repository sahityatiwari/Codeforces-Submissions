#include <bits/stdc++.h>
using namespace std;

#define int long long


int minCoins(int T)
{
    int n = 5;
    vector<int> arr = {1, 3, 6, 10, 15};

    vector<int> prev(T + 1, 0);
    vector<int> cur(T + 1, 0);

    for (int i = 0; i <= T; i++)
    {
        if (i % arr[0] == 0)
            prev[i] = i / arr[0];
        else
            prev[i] = 1e9;
    }

    for (int ind = 1; ind < n; ind++)
    {
        for (int target = 0; target <= T; target++)
        {

            int notTake = prev[target];

            int take = 1e9;
            if (arr[ind] <= target)
                take = 1 + cur[target - arr[ind]];

            cur[target] = min(notTake, take);
        }

        prev = cur;
    }

    int ans = prev[T];

    if (ans >= 1e9)
        return -1;

    return ans;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << minCoins(n) << endl;
    }
    return 0;
}
