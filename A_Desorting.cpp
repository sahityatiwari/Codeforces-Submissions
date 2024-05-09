#include <bits/stdc++.h>
using namespace std;
#define int long long

int minOperationsToMakeUnsorted(vector<int> &a)
{
    int n = a.size();
    int mini = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {

        mini = min(mini, a[i + 1] - a[i]);
    }
    if (mini < 0)
        return 0;
    else
        return (mini / 2) + 1;
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

        int result = minOperationsToMakeUnsorted(a);
        cout << result << "\n";
    }

    return 0;
}
