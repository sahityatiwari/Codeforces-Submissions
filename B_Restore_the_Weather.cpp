#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> restoreWeather(int n, int k, vector<int> &a, vector<int> &b);

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> result = restoreWeather(n, k, a, b);

        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

vector<int> restoreWeather(int n, int k, vector<int> &a, vector<int> &b)
{
    vector<int> res(n);

    vector<pair<int, int>> ta;

    for (int i = 0; i < a.size(); i++)
    {
        ta.push_back({a[i], i});
    }

    sort(ta.begin(), ta.end());
    sort(b.begin(), b.end());

    int i = 0;
    while (i < n)
    {
        res[ta[i].second] = b[i];
        i++;
    }
    return res;
}
