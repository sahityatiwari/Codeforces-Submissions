#include <bits/stdc++.h>
using namespace std;
#define int long long

// Function to find the maximum final score
int maxFinalScore(int n, vector<int> &a)
{

    sort(a.begin(), a.end());
    int ans = 0;
    n = 2*n;
    for (int i = n-2; i >= 0 ; i -= 2)
    {
        ans += a[i];
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
        vector<int> nums(2 * n);
        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> nums[i];
        }
        cout << maxFinalScore(n, nums) << endl;
    }
    return 0;
}
