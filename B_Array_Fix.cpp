#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPossible(vector<int> &a)
{
    int n = a.size();
    vector<int> arr(n + 1);
    arr[0] = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i + 1] = a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int mx = 0, x, y;
        int f = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] < mx)
            {
                return false;
            }
            else
            {
                x = arr[i] / 10;
                y = arr[i] % 10;
                if (mx <= x && x <= y)
                {
                    mx = y;
                }
                else
                {
                    mx = arr[i];
                }
            }
        }
    }
    return true;
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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cout << (isPossible(a) ? "YES" : "NO") << endl;
    }
    return 0;
}
