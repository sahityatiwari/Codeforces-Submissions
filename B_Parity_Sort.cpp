#include <bits/stdc++.h>
using namespace std;
#define int long long

bool canSortArray(vector<int> &a)
{

    int n = a.size();
    vector<int> even, odd;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even.push_back(a[i]);
        else
            odd.push_back(a[i]);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    int e = 0;
    int o = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            a[i] = even[e++];
        else
            a[i] = odd[o++];
    }

    if (is_sorted(a.begin(), a.end()))
        return true;
    else
        return false;
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

        bool result = canSortArray(a);

        if (result)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
