#include <bits/stdc++.h>
using namespace std;
#define int long long


vector<int> findLotteryWinners(int t, vector<pair<int, vector<int>>> &a)
{
    vector<int> ans;

    unordered_map<int, int> mp;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < a[i].first; j++)
        {
            mp[a[i].second[j]]++;
        }
    }

    for (int i = 0; i < t; i++)
    {
        int count = 0;
        for (int j = 0; j < a[i].first; j++)
        {
            if (mp[a[i].second[j]] == 1 && count == 0)
            {

                ans.push_back(a[i].second[j]);
                count = 1;
            }

            mp[a[i].second[j]]--;
        }
        if (count != 1)
            return {-1};
    }
    return ans;
}

// Main function
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, vector<int>>> testCases; // Fix: Use an empty vector

        int m;
        cin >> m;

        for (int j = 0; j < m; ++j)
        {
            int ni;
            cin >> ni;
            vector<int> participants(ni);
            for (int k = 0; k < ni; ++k)
            {
                cin >> participants[k];
            }
            testCases.push_back({ni, participants}); // Fix: push_back to the vector
        }

        // Find and print results
        vector<int> results = findLotteryWinners(m, testCases);
        for (int i = 0; i < results.size(); ++i)
        {
            cout << results[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
