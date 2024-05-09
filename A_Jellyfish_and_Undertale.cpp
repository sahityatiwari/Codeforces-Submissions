#include <bits/stdc++.h>
using namespace std;
#define int long long

int maximumTimeUntilExplode(int a, int b, int n, vector<int> &x)
{

    int sum = b;
    for (int i = 0; i < n; i++)
    {
        if (x[i] < a)
            sum += x[i];
        else
            sum += a-1;
    }

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
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> x(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> x[i];
        }

        cout << maximumTimeUntilExplode(a, b, n, x) << "\n";
    }

    return 0;
}
