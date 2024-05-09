#include <bits/stdc++.h>
using namespace std;
#define int long long

int minAviaries(int n, vector<int> &b)
{
    int c1 = 0;
    int c2 = 0;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (b[i] == 2)
        {
            c1 = c1 + c2;

            if (c1 > 0)
                ans = max(ans, (c1 + 2) / 2);

            c2 = 0;
        }
        else
        {
            c2++;
            if (c1 == 0)
                ans = max(ans, c2);
            else
                ans = max(ans, (c1 + 2) / 2 + c2);
        }
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

        vector<int> plan(n);
        for (int i = 0; i < n; i++)
        {
            cin >> plan[i];
        }

        int result = minAviaries(n, plan);

        cout << result << "\n";
    }

    return 0;
}
