#include <bits/stdc++.h>
using namespace std;
#define int long long

int minOperationsToRemoveBlackCells(int n, int k, string s)
{

    int i = 0;
    int count = 0;

    while (i < n)
    {
        if (s[i] == 'B')
        {
            count = count + 1;
            i += k;
        }

        else
            i++;
    }
    return count;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int result = minOperationsToRemoveBlackCells(n, k, s);
        cout << result << endl;
    }

    return 0;
}
