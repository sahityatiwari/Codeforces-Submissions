#include <bits/stdc++.h>
using namespace std;
#define int long long

char findReplacedLetter(const vector<string> &a)
{

    int x;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == '?')
            {
                x = i;
                break;
            }
        }
    }

    int A = 0, B = 0, C = 0;

    for (int i = 0; i < 3; i++)
    {
        if (a[x][i] == 'A')
            A = 1;
        if (a[x][i] == 'B')
            B = 1;
        if (a[x][i] == 'C')
            C = 1;
    }

    if (A == 0)
        return 'A';
    else if (B == 0)
        return 'B';
    else
        return 'C';
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<string> latinSquare(3);
        for (int i = 0; i < 3; ++i)
        {
            cin >> latinSquare[i];
        }

        char result = findReplacedLetter(latinSquare);

        cout << result << endl;
    }

    return 0;
}
