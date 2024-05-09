#include <bits/stdc++.h>
using namespace std;

string findVerticalWord(int n, vector<vector<char>> &grid)
{

    string ans = "";
    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            if (grid[i][j] != '.')
                ans += grid[i][j];
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<vector<char>> grid(8, vector<char>(8));

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> grid[i][j];
            }
        }

        string result = findVerticalWord(8, grid);
        cout << result << "\n";
    }

    return 0;
}
