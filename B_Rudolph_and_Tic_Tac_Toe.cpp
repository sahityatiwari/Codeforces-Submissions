#include <bits/stdc++.h>
using namespace std;
#define int long long

char findWinner(vector<vector<char>> &a)
{
    if (a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][0] != '.')
        return a[0][0];
    else if (a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][0] != '.')
        return a[1][0];
    else if (a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][0] != '.')
        return a[2][0];
    else if (a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[0][0] != '.')
        return a[2][0];
    else if (a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[0][1] != '.')
        return a[2][1];
    else if (a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[0][2] != '.')
        return a[2][2];
    else if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != '.')
        return a[2][2];
    else if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] != '.')
        return a[0][2];
    else
        return 'D';
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<vector<char>> board(3, vector<char>(3));

        for (int i = 0; i < 3; i++)
        {
            string row;
            cin >> row;
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = row[j];
            }
        }

        char result = findWinner(board);

        if (result == 'D')
            cout << "DRAW"<< "\n";
        else
            cout << result << "\n";
    }

    return 0;
}
