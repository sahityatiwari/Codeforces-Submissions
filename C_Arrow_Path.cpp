#include <bits/stdc++.h>
using namespace std;
#define int long long

bool canReach(vector<string> &grid)
{
    int n = grid[0].size();
   
    for (int i = 2; i < n - 1; i += 2)
        if (grid[1][i] == '<' && (grid[0][i - 1] == '<' || grid[0][i + 1] == '<'))
        {
            return 0;
        }
    return 1;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> grid(2);
        for (int i = 0; i < 2; ++i)
        {
            cin >> grid[i];
        }
        cout << (canReach(grid) ? "YES" : "NO") << endl;
    }
    return 0;
}
