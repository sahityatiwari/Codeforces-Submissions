#include <bits/stdc++.h>
using namespace std;
#define int long long

pair<int, int> findMaxSumAndOperations(int n, vector<int> &a)
{
    int count = 0;
    int final = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && count == 0)
        {
            count = 1;
            final = final + count;
        }
        else if (count == 1 && a[i] == 0)
        {
            count = 1;
        }
        else if (a[i] >= 0)
        {

            count = 0;
        }

        sum = sum + abs(a[i]);
    }

    return {sum, final};
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

        pair<int, int> result = findMaxSumAndOperations(n, a);
        cout << result.first << " " << result.second << "\n";
    }

    return 0;
}
