#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> constructArray(int x, int y, int n)
{

    int i = y - 1, j = 1;
    vector<int> ans;
    ans.push_back(y);

        vector<int> alt(1, -1);
    while (i > x && ans.size() < n-1)
    {

        ans.push_back(i);

        j++;
        i = i - j;
    }

    ans.push_back(x);
    reverse(ans.begin(), ans.end());
     int sum = n*(n-1)/2;
    
    if (y - x >= sum)
        return ans;

    else
        return {-1};
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;

        vector<int> result = constructArray(x, y, n);

        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
