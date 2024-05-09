#include <bits/stdc++.h>
using namespace std;

bool isBeautifulArray(int n, vector<int> &a)
{

    int me = INT_MAX;
    int mo = INT_MAX;
    int e = 0, o = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {

            me = min(me, a[i]);
            e = 1;
        }
        else
        {

            mo = min(mo, a[i]);
            o = 1;
        }
    }
    if (mo < me && o == 1 && e == 1)
        return true;
    else if (mo > me && o == 1 && e == 1)
        return false;
    else
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (isBeautifulArray(n, a))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
