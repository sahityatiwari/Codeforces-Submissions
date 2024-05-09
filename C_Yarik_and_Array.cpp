#include <bits/stdc++.h>
using namespace std;

#define int long long

int maxAlternatingSum(int n, vector<int> &a)
{

    int m = INT_MIN;
    int i = 0, j = 1;
    int sum = a[0];
    m = max(sum, m);
    while (j < n)
    {
        if (abs(a[j - 1]) % 2 != abs(a[j]) % 2 && sum >= 0)
        {
            sum += a[j];
            m = max(sum, m);
            j++;
        }
        else if (abs(a[j - 1]) % 2 != abs(a[j]) % 2 && sum < 0)
        {
            sum = a[j];
            m = max(sum, m);
            j++;
        }
        else
        {
            sum = a[j];
            m = max(sum, m);
            j++;
        }
    }
    return m;
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

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int result = maxAlternatingSum(n, a);
        cout << result << "\n";
    }

    return 0;
}
