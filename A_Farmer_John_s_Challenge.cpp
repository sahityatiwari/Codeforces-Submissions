#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> constructArray(int n, int k)
{

    if (n != k && k > 1)
    {
        return {-1};
    }

    else if (n == k)
    {
        vector<int> result(n, 1);
        return result;
    }

    else
    {
        vector<int> result;
        result.push_back(n);
        for (int i = 1; i < n; i++)
        {
            result.push_back(i);
        }
        return result;
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> result = constructArray(n, k);

        for (int i = 0; i < result.size(); ++i)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
