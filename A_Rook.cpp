#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(string s)
{
    char col = s[0];
    char row = s[1];

    for (char c = 'a'; c <= 'h'; ++c)
    {
        if (c != col)
        {
            cout << c << row << endl;
        }
    }

    for (char r = '1'; r <= '8'; ++r)
    {
        if (r != row)
        {
            cout << col << r << endl;
        }
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string pos;
        cin >> pos;

        solve(pos);
        cout << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void solve()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;

//         char col = s[0];
//         char row = s[1];

//         for (char c = 'a'; c <= 'h'; ++c)
//         {
//             if (c != col)
//             {
//                 cout << c << row << endl;
//             }
//         }

//         for (char r = '1'; r <= '8'; ++r)
//         {
//             if (r != row)
//             {
//                 cout << col << r << endl;
//             }
//         }
//     }
// }

// signed main()
// {
//     solve();
//     return 0;
// }
