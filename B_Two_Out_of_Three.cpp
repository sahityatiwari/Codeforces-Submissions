#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> solve(int n, vector<int> &a);

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

        vector<int> result = solve(n, a);

        // Output the result vector
        for (int i = 0; i < result.size(); ++i)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

vector<int> solve(int n, vector<int> &a)
{
    vector<int> result(n, 1);
    vector<int> count(101, 0);
    vector<int> ans(1, -1);

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
        if (count[a[i]] == 2)
        {
            x++;
            if (x == 1)
                result[i] = 2;
            else if (x == 2)
                result[i] = 3;
        }
    }
    if (x >= 2)
        return result;
    else
        return ans;
}
