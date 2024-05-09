#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> solve(int n, vector<int> &b)
{
    vector<int> a;
    vector<int> d = b;
    sort(d.begin(), d.end(), greater<int>());
    unordered_map<int, int> count_map;

    int j = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < n * (n - 1) / 2; i++)
    {
        maxi = max(maxi, b[i]);
        count_map[d[i]]++;
    }
    a.push_back(maxi);

    while (a.size() < n && j < d.size())
    {
        if (count_map[d[j]] > 0)
        {
            count_map[d[j]] -= a.size();
            a.push_back(d[j]);
        }
        else if (count_map[d[j]] == 0)
            j++;
    }
    return a;
}


signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> b(n * (n - 1) / 2);
        for (int i = 0; i < n * (n - 1) / 2; i++)
        {
            cin >> b[i];
        }

        vector<int> result = solve(n, b);

        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
