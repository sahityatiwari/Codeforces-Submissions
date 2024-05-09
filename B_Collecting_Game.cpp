#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> maxRemovableElements(int n, vector<int> &a)
{
    vector<pair<int, int>> s;

    for (int i = 0; i < n; i++)
    {
        s.push_back({a[i], i});
    }
    sort(s.begin(), s.end());

    vector<pair<int, int>> sum(n);

    sum[0].first = s[0].first;
    sum[0].second = s[0].second;

    for (int i = 1; i < n; i++)
    {
        sum[i].first = sum[i - 1].first + s[i].first;
        sum[i].second = s[i].second;
    }

    vector<int> ans(n);
    ans[sum[0].second] = 0;

    for (int i = 1; i < n; i++)
    {
        if (sum[i].first >= sum[i - 1].first)
        {
            ans[sum[i].second] = i;
        }
    }
    
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (sum[j].first >=s[i].first)
            {
                ans[s[j].second]++;
                sum[j].first +=s[i].first;
            }
            else
            {
                break;
            }
        }
    }

    return ans;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<int> result = maxRemovableElements(n, a);

        for (int i = 0; i < n; ++i)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
