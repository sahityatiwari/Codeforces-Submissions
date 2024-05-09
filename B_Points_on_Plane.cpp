#include <bits/stdc++.h>
using namespace std;
#define int long long

int minCost(int n)
{
   return sqrt(n-1);
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

        int result = minCost(n);

        cout << result << "\n";
    }

    return 0;
}
