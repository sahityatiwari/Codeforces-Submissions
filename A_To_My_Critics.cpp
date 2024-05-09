#include <bits/stdc++.h>
using namespace std;
#define int long long

bool canFormSumGreaterThanOrEqualTo10(int a, int b, int c)
{
    if (a + b >= 10 || b + c >= 10 || a + c >= 10)
        return true;
    else
        return false;
}

signed main()
{
    int t;+
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        bool result = canFormSumGreaterThanOrEqualTo10(a, b, c);

        if (result)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}
