#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n, vector<string> &a)
{
    int i = 0;
    int sum = 0;
    while (i < n / 2)
    {
        for (int j = 0; j < n; j++)
        {
            char maxi = max({a[i][j], a[n - j - 1][i], a[n - i - 1][n - j - 1], a[j][n - i - 1]});
            sum += 4 * maxi - a[i][j] - a[n - j - 1][i] - a[n - i - 1][n - j - 1] - a[j][n - i - 1];
            a[i][j] = a[n - j - 1][i] = a[n - i - 1][n - j - 1] = a[j][n - i - 1] = maxi;
        }
        i++;
    }

    return sum;
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

        vector<string> matrix(n);
        for (int i = 0; i < n; i++)
        {
            cin >> matrix[i];
        }

        int result = solve(n, matrix);
        cout << result << "\n";
    }

    return 0;
}
