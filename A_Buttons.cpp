#include <bits/stdc++.h>
using namespace std;

#define int long long

string determineWinner(int a, int b, int c)
{

    if (b > a )
        return "Second";
    else if (a > b )
        return "First";
    else
    {
        

        if (c % 2 == 0)
            return "Second";
        else
            return "First";
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        string winner = determineWinner(a, b, c);
        cout << winner << endl;
    }

    return 0;
}
