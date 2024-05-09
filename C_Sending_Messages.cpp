#include <bits/stdc++.h>
using namespace std;
#define int long long

bool canSendAllMessages(int n, int f, int a, int b, vector<int> &s)
{
    int curr = 0;

    for (int i = 0; i < n; i++)
    {
        if ((s[i] - curr) * a > b)
        {
            f -= b;
        }
        else
        {
            f -= (s[i] - curr) * a;
        }
        curr = s[i];
        if (f <= 0 && i < n)
        {
            return false;
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
        int n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<int> moments(n);
        for (int i = 0; i < n; i++)
        {
            cin >> moments[i];
        }

        cout << (canSendAllMessages(n, f, a, b, moments) ? "YES" : "NO") << endl;
    }

    return 0;
}
