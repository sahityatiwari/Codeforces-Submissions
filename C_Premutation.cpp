#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> solveTest(int n, vector<vector<int>> &a)
{

    int x;
    for (int i = 0; i < n - 2; i++)
    {
        if (a[i][0] != a[i + 1][0] && a[i][0] == a[i + 2][0])
        {
            x = i + 1;
            break;
        }
        else if (a[i][0] == a[i + 1][0] && a[i][0] != a[i + 2][0])
        {
            x = i + 2;
            break;
        }
        else if (a[i][0] != a[i + 1][0] && a[i][0] != a[i + 2][0])
        {
            x = i;
            break;
        }
    }
    vector<int> ans;

    if (x == 0)
        ans.push_back(a[1][0]);
    else if (x == n - 1)
        ans.push_back(a[n - 2][0]);
    else
        ans.push_back(a[x+1][0]);

    for (int i = 0; i < a[x].size(); i++)
    {
        ans.push_back(a[x][i]);
    }
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> sequences(n, vector<int>(n - 1));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n - 1; ++j)
            {
                cin >> sequences[i][j];
            }
        }

        vector<int> result = solveTest(n, sequences);

        for (int i = 0; i < n; ++i)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
