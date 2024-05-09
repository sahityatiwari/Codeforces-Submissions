#include <bits/stdc++.h>
using namespace std;

#define int long long

string solveTest(int n, vector<pair<int, int>> &testCases, int k)
{

    int count = 0;
    int count1 = 0;
    for (int i = 0; i < testCases.size(); i++)
    {
        if (k == testCases[i].first)
            count = 1;
        if (k == testCases[i].second)
            count1 = 1;
    }

    if (count == 1 && count1 == 1)
        return "YES";
    else
        return "NO";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> testCases(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> testCases[i].first >> testCases[i].second;
        }

        cout << solveTest(n, testCases, k) << "\n";
    }

    return 0;
}
