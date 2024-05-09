#include <bits/stdc++.h>
using namespace std;

int countOperationsToSort(vector<int> &a)
{
    int n = a.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            count = max(count, a[i]);
    }

    return count;
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

        int operations = countOperationsToSort(a);
        cout << operations << endl;
    }

    return 0;
}
