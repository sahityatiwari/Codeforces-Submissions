#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isSquare(const vector<string> &grid, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (grid[i][j] == '1')
                if ((j == n - 1 && grid[i][j - 1] == '0') || (j == 0 && grid[i][j + 1] == '0') ||  ( grid[i][j + 1] == '0' &&  grid[i][j - 1] == '0') )
                {

                    return false;
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
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }
        if (isSquare(grid, n))
        {
            cout << "SQUARE\n";
        }
        else
        {
            cout << "TRIANGLE\n";
        }
    }
    return 0;
}
