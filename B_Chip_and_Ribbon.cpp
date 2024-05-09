#include <bits/stdc++.h>
using namespace std;

#define int long long

int solveTest(int n, vector<int> &a)
{
    int z = 0;
    int maxi = -1;
   
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
    }
    for (int i = 1; i < n-1; i++)
    {

        if (a[i] == 0)
            z++;
    }
    return z + maxi - 1;
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

        vector<int> c(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> c[i];
        }

        int result = solveTest(n, c);
        cout << result << "\n";
    }

    return 0;
}
