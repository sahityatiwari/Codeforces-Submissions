#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxPossibleCostOfColoring(int n, vector<int> &a)
{
    int i = 0, j = n - 1;
    int sum = 0;
    sort(a.begin(), a.end());

    while (j > i)
    {
        sum = sum + a[j] - a[i];
        i++;
        j--;
    }
    return sum;
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

        int result = maxPossibleCostOfColoring(n, a);
        cout << result << "\n";
    }

    return 0;
}
