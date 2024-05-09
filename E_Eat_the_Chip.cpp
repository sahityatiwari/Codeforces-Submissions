#include <bits/stdc++.h>
using namespace std;
#define int long long

string gameOutcome(int h, int w, int xa, int ya, int xb, int yb)
{
    int z;
    if (abs(xa - xb) % 2 == 0)
    {
        if (yb > ya)
        {
            z = ya;
        }
        else if (ya < yb)
        {
            z = w - ya;
        }
        else
        {
            return "Bob";
        }
        if (z > abs(xa - xb)/2)
        {
            return "Draw";
        }
        else
        {
            return "Bob";
        }
    }
    else
    {
        if (yb < ya)
        {
            z = yb;
        }
        else if (ya > yb)
        {
            z = w - yb;
        }
        else
        {
            return "Alice";
        }
        if (z > abs(xa - xb)/2)
        {
            return "Draw";
        }
        else
        {
            return "Alice";
        }
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int h, w, xa, ya, xb, yb;
        cin >> h >> w >> xa >> ya >> xb >> yb;

        cout << gameOutcome(h, w, xa, ya, xb, yb) << endl;
    }

    return 0;
}
