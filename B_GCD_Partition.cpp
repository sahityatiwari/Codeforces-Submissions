#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxPartitionScore(const vector<int> &arr)
{

    int n = arr.size();
    vector<int> prsm(n);
    prsm[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prsm[i] += prsm[i - 1] + arr[i];
    }

    int ans = INT_MIN;

    for (int i = 0; i < n-1; i++)
    {
        int z = __gcd(prsm[n - 1] - prsm[i], prsm[i]);
        ans = max(ans, z);
        
    }
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
            vector<int> arr(n);
            for (int i = 0; i < n; ++i)
            {
                cin >> arr[i];
            }
            cout << maxPartitionScore(arr) << "\n";
        }
        return 0;
    }
