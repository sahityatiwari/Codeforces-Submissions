#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<char> solve(int n, string a)
{

    vector<char> ans;

    int i = 1;
    int x = a[0];

    while (i < n)
    {
        if (a[i] == x)
        {
            ans.push_back(a[i]);
            x = a[i + 1];
            i = i + 2;
        }
        else
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

        string s;
        cin >> s;

        vector<char> result = solve(n, s);
        for(int i = 0; i < result.size(); i++)
        cout << result[i];

        cout<<endl;
    }

    return 0;
}
