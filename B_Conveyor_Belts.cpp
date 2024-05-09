#include <bits/stdc++.h>
using namespace std;
#define int long long

int minEnergy(int n, int x1, int y1, int x2, int y2)
{
    if (x1 > n / 2)
        x1 = n - x1 + 1;
    if (x2 > n / 2)
        x2 = n - x2 + 1;
    if (y1 > n / 2)
        y1 = n - y1 + 1;
    if (y2 > n / 2)
        y2 = n - y2 + 1;

    int a = min(x1, y1);
    int b = min(x2, y2);

    int ans;
    if ((a - b) >= 0)
        return a - b;
    else
        return -(a - b);


}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;

        int result = minEnergy(n, x1, y1, x2, y2);

        cout << result << "\n";
    }

    return 0;
}
