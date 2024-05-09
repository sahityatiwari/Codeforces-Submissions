#include <bits/stdc++.h>
using namespace std;
#define int long long

int minOperations(vector<int> &a)
{
    int n = a.size();

    int count = 0;
    int f1 = -1;
    int f2 = -1;
    // int s = 0;
    // int e = n - 1;
    // while (s < e)
    // {

    //     if (a[s] == 1 && f1 == 0)
    //     {
    //         f1 = 1;
    //         s++;
    //     }
    //     if (a[e] == 1 && f2 == 0)
    //     {
    //         f2 = 1;
    //         e--;
    //     }
    //     if (f1 == 1 && f2 == 1 && a[s] == 0)
    //     {
    //         count++;
    //         s++;
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            if (f1 == -1)
            {
                f1 = i;
                break;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            if (f2 == -1)
            {
                f2 = i;
                break;
            }
        }
    }
    int k = f1;
    while (k <= f2)
    {
        if (a[k] == 0)
        {
            count++;
        }

        k++;
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
        vector<int> cells(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> cells[i];
        }
        cout << minOperations(cells) << "\n";
    }
    return 0;
}
