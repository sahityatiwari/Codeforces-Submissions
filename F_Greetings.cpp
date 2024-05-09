#include <bits/stdc++.h>
using namespace std;
#define int long long

int countGreetings(int n, vector<pair<int, int>> &a)
{
    sort(a.begin(), a.end(), [](const auto &x, const auto &y)
         { return x.second < y.second; });

    int count = 0;
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < i ; j++)
        {
            if (a[j].first >= a[i].first)
            {
                count++;
            }
        }
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
        vector<pair<int, int>> people(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> people[i].first >> people[i].second;
        }

        int result = countGreetings(n, people);

        cout << result << endl;
    }

    return 0;
}
