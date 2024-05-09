#include <bits/stdc++.h>
using namespace std;
#define int long long

int canSortPermutation(int n, int k, vector<int> &a)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs((a[i] - i - 1)) % k != 0)
            count++;
    }
    if (count == 0)
        return 0;
    else if (count == 2)
        return 1;
    else
        return -1;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> permutation(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> permutation[i];
        }

        int result = canSortPermutation(n, k, permutation);
        cout << result << "\n";
    }

    return 0;
}
