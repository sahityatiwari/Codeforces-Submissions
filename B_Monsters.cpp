
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void orderOfMonstersDeath(int n, int k, vector<int> &a)
// {
//     unordered_map<int, vector<int>> m;
//     for (int i = 0; i < n; i++)
//     {
//         m[a[i] % k].push_back(i + 1);
//     }
//     vector<int> ans;

//     // Append elements for key 0
//     for (int i = 0; i < m[0].size(); i++)
//     {
//         ans.push_back(m[0][i]);
//     }

//     // Append elements for other keys in descending order
//     for (int i = k - 1; i >= 1; i--)
//     {
//         ans.insert(ans.end(), m[i].begin(), m[i].end());
//     }

//     // Output the result
//     for (int i = 0; i < n; ++i)
//     {
//         cout << ans[i] << " ";
//     }

//     cout << "\n";
// }

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;

//         vector<int> health(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> health[i];
//         }

//         orderOfMonstersDeath(n, k, health);
//     }

//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve(int n, int k)
{

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<pair<ll, ll>> hMap;

    for (int i = 0; i < n; i++)
    {
        ll res = arr[i] % k;
        if (res == 0)
            res += k;
        hMap.push_back({-res, i});
    }

    sort(hMap.begin(), hMap.end());
    for (auto ele : hMap)
        cout << ele.second + 1 << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> n >> k;
        solve(n, k);
        cout << endl;
    }
}