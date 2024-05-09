#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> solve(int n)
{

    vector<bool> visited(n+1, 0);
    vector<int> ans;
    int i = 1;
    while (i <= n)
    {
        if (!visited[i])
        {
            for (int j = i; j <= n; j = j * 2)
            {
                visited[j] = 1;
                ans.push_back(j);
            }
        }
        i++;
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

        vector<int> result = solve(n);

        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
