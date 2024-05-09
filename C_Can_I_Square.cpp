#include <bits/stdc++.h>
using namespace std;
#define int long long

bool canBuildSquare(int n, vector<int> &s)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += s[i];
    }

    int x = sqrt(sum);
    if (sum == x * x)
        return 1;
    else
        return 0;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> squares(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> squares[i];
        }

        string result = canBuildSquare(n, squares) ? "YES" : "NO";

        cout << result << endl;
    }

    return 0;
}
