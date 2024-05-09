#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isSymmetrical(vector<int> &a)
{

    if (a[0] != a.size())
        return false;
    else
    {
        vector<int> m(a[0] + 1, 0);
        int count = 1;
        int prev = 0;
        m[a[0]] = 1;
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] == a[i - 1])
                m[a[i]]++;
            else
            {
                m[a[i]] = m[a[i - 1]] + 1;
            }
        }

        vector<int> ans;
        int x = 0;
        for (int i = a[0]; i >= 1; i--)
        {
            if (m[i] != 0)
            {

                ans.push_back(m[i]);
                x = m[i];
            }
            else
            {
                ans.push_back(x);
            }
        }
        std::sort(a.begin(), a.end());
        std::sort(ans.begin(), ans.end());

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != ans[i])
                return false;
        }
        return true;
    }
}

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

        vector<int> heights(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> heights[i];
        }

        if (isSymmetrical(heights))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
