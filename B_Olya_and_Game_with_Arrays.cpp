#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxBeautyOfArrays(int n, vector<vector<int>> &mat)
{

    for (int i = 0; i < n; i++)
        sort(mat[i].begin(), mat[i].end());

    int sf = 0, ss = 0, minif = INT_MAX, minis = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        sf += mat[i][0];
        minif = min(minif, mat[i][0]);
        minis = min(minis, mat[i][1]);
        ss += mat[i][1];
    }

    if (minif > minis)
    {
        return max(sf, ss);
    }
    else
    {
        int x = ss - minis + minif;
        return max(x, sf);
    }
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

        vector<vector<int>> arrays(n);
        for (int i = 0; i < n; ++i)
        {
            int m;
            cin >> m;
            arrays[i].resize(m);
            for (int j = 0; j < m; ++j)
            {
                cin >> arrays[i][j];
            }
        }

        cout << maxBeautyOfArrays(n, arrays) << "\n";
    }

    return 0;
}
