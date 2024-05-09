#include <bits/stdc++.h>
using namespace std;

#define int long long

string determineReadStatus(int n, int o, int q, string s)
{

    int r = o, x =0;

    if(n == o) return "YES";
    else{

    
    for (int i = 0; i < q; i++)
    {

        if (s[i] == '+')
        {
            r++;
            o++;
        }
        else
        {

            r--;
        }
        if (r == n)
        {

            x = 1;
            break;
        }
    }
    if (x == 1)
    {
        return "YES";
    }
    else
    {
        if (o >= n)
        {
            return "MAYBE";
        }
        else
            return "NO";
    }
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, q;
        cin >> n >> a >> q;

        string notifications;
        cin >> notifications;

        string result = determineReadStatus(n, a, q, notifications);

        cout << result << endl;
    }

    return 0;
}
