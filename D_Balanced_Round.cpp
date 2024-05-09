#include <bits/stdc++.h>
using namespace std;
#define int long long

int minProblemsToRemoveToBalance(int n, int k, vector<int> &a)
{
    int count = 0;
    int maxi = 0;

    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) > k)
        {
            count = 0;
        }
        else
        {

            count++;
            maxi = max(maxi, count);
        }
    }
    return n - maxi - 1;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> difficulties(n);

        for (int i = 0; i < n; i++)
        {
            cin >> difficulties[i];
        }

        int result = minProblemsToRemoveToBalance(n, k, difficulties);
        cout << result << "\n";
    }

    return 0;
}
