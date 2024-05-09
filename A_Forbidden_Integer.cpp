#include <bits/stdc++.h>
using namespace std;
#define int long long

pair<string, pair<int, vector<int>>> canObtainSum(int n, int k, int x)
{

    if (n % 2 != 0 && x == 1 && k == 2)
    {
        return {"NO", {0, {}}};
    }
    else if (x == 1 && k == 1)
    {
        return {"NO", {0, {}}};
    }
    else if (k > 1 && x != 1)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(1);
        }
        return {"YES", {n, ans}};
    }
    else if (k > 2 && x == 1 && n % 2 != 0)
    {
        vector<int> ans;
        for (int i = 1; i <= (n - 3) / 2; i++)
        {
            ans.push_back(2);
        }
        ans.push_back(3);
        return {"YES", {ans.size(), ans}};
    }
    else if (k >= 2 && x == 1 && n % 2 == 0)
    {
        vector<int> ans;
        for (int i = 1; i <= (n) / 2; i++)
        {
            ans.push_back(2);
        }
        return {"YES", {ans.size(), ans}};
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        pair<string, pair<int, vector<int>>> result = canObtainSum(n, k, x);
        cout << result.first << "\n";

        if (result.first == "YES")
        {
            cout << result.second.first << "\n";
            for (int i = 0; i < result.second.first; i++)
            {
                cout << result.second.second[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
