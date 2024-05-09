#include <bits/stdc++.h>
using namespace std;
#define int long long

int minimumRopesToCut(int n, vector<pair<int, int>> &nails)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (nails[i].first - nails[i].second >= 1)
            count++;
    }
    return count;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> nails(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nails[i].first >> nails[i].second;
        }

        int result = minimumRopesToCut(n, nails);
        cout << result << "\n";
    }

    return 0;
}
