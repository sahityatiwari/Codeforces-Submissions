#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> findSuccessValue(vector<int> &a, vector<int> &q)
{

    sort(a.begin(), a.end(), greater<int>());
    vector<int> ans;
    for (int i = 0; i < q.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < q[i]; j++)
        {
            sum += a[j];
        }
        ans.push_back(sum);
    }
    return ans;
}

signed main()
{
    int n;
    cin >> n;

    vector<int> num_viewers(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> num_viewers[i];
    }

    int q;
    cin >> q;

    vector<int> queries(q);
    for (int i = 0; i < q; ++i)
    {
        cin >> queries[i];
    }

    vector<int> result = findSuccessValue(num_viewers, queries);

    for (int i = 0; i < q; ++i)
    {
        cout << result[i] << " ";
    }

    return 0;
}
