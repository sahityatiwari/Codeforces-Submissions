#include <bits/stdc++.h>
using namespace std;

#define int long long

int solveTest(int n, string &s)
{

    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (s[i] == s[j])
        {
            return j - i + 1;
        }
        else
        {
            i++;
            j--;
        }
    }
    return 0;
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

        string s;
        cin >> s;

        int result = solveTest(n, s);
        cout << result << "\n";
    }

    return 0;
}
