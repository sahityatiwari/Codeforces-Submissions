#include <bits/stdc++.h>
using namespace std;
#define int long long

pair<bool, vector<int>> findOddSumTriple(const vector<int> &arr)
{

    vector<pair<int, int>> odd, even;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
            even.push_back({arr[i], i});
        else
        {
            odd.push_back({arr[i], i});
        }
    }
    if (odd.size() > 2)
    {
        vector<int> ans = {odd[0].second, odd[1].second, odd[2].second};
        return {true, ans};
    }
    else if (even.size() > 1 && odd.size() > 0)
    {
        vector<int> ans = {even[0].second, even[1].second, odd[0].second};
        return {true, ans};
    }
    return {false, {}};
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        // vector<int> x;
        pair<bool, vector<int>> result = findOddSumTriple(arr);
        if (result.first)
        {
            cout << "YES\n";
            for (int idx : result.second)
            {
                idx += 1;
                cout << idx << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
