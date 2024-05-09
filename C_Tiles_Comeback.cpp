#include <bits/stdc++.h>
using namespace std;
#define int long long

string canGetPath(int n, int k, vector<int> &a)
{

    int c1 = 0, c2 = 0, x = 0;

    if (a[0] == a[n - 1])
    {
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[0])
                c++;
        }

        if (c >= k)
            return "YES";
        else
            return "NO";
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[0])
                c1++;
            if (c1 == k)
            {
                x = i;
                break;
            }
        }
        for (int i = x + 1; i < n; i++)
        {
            if (a[i] == a[n - 1])                
            c2++;
        }

        if ((c1 == k && c2 >= k))
            return "YES";
        else
            return "NO";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> c(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> c[i];
        }

        cout << canGetPath(n, k, c) << "\n";
    }

    return 0;
}
