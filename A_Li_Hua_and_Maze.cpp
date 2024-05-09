#include <bits/stdc++.h>
using namespace std;
#define int long long

int minObstacles(int n, int m, int x1, int y1, int x2, int y2)
{

    x1--;
    y1--;
    x2--;
    y2--;

    int cnt1 = 0;
    int cnt2 = 0;

    int r[4] = {0, 0, 1, -1};
    int c[4] = {-1, 1, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        int nx1 = x1 + c[i];
        int ny1 = y1 + r[i];
        // dbg(nx1);
        // dbg(ny1);

        if (nx1 >= 0 && nx1 < n && ny1 >= 0 && ny1 < m)
        {
            cnt1++;
            // dbg(cnt1);
        }

        int nx2 = x2 + c[i];
        int ny2 = y2 + r[i];
        // dbg(nx2);
        // dbg(ny2);
        if (nx2 >= 0 && nx2 < n && ny2 >= 0 && ny2 < m)
        {
            cnt2++;
            // dbg(cnt2);
        }
        // cout << endl;
    }
    return min(cnt1, cnt2);
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x1, y1, x2, y2;
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        cout << minObstacles(n, m, x1, y1, x2, y2) << endl;
    }
    return 0;
}
