#include <bits/stdc++.h>
using namespace std;
#define int long long

int calculateMinimumMaxSteps(int n, int k, vector<int> &a)
{
    map<int, pair<int, int>> mp;
    
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> colors(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> colors[i];
        }
        int result = calculateMinimumMaxSteps(n, k, colors);
        cout << result << endl;
    }

    return 0;
}
