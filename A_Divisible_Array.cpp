#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> solve(int n);

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
        vector<int> result = solve(n);

        // Output the result vector
        for (int i = 0; i < n; ++i)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

vector<int> solve(int n)
{
    vector<int> result;
    if(n%2 ==0)

    for (int i = 1; i <= n; i++)
    {

        result.push_back(i * 2);
    }
    else
    for (int i = 1; i <= n; i++)
    {

        result.push_back(i );
    }
    

    return result;
}
