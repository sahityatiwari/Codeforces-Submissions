#include <bits/stdc++.h>
using namespace std;

#define int long long

int findInitialNumber(int n, vector<int> &a)
{

    sort(a.begin(), a.end());
    if (a[0] < 0)
        return a[0];

    else
        return a[n - 1];
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int result = findInitialNumber(n, a);
        cout << result << endl;
    }

    return 0;
}
