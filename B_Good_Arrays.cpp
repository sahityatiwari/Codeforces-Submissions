#include <bits/stdc++.h>
using namespace std;

#define int long long

string canFormGoodArray(vector<int> &a)
{

    int n = a.size();
    unordered_map<int, int> m;
    int sum = 0;
    int maxi = a[0];
    int x = 0;

    if (n == 1)
        return "NO";
    else
    {

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                x++;
            else
                sum += a[i] - 1;
        }

        if (sum < x)
            return "NO";
        else
            return "YES";
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        string result = canFormGoodArray(a);
        cout << result << endl;
    }

    return 0;
}
