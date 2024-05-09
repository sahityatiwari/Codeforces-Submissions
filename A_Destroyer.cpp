#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isRobotArrangementPossible(vector<int> &a)
{

    vector<int> count(100, 0);
    int x = 0;
    int n = a.size();
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
        maxi = max(maxi, a[i]);
    }
    for (int i = 1; i <= maxi; i++)
    {
        if (count[i] > count[i - 1])
        {
            return false;
        }
    }

    return true;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> reportedNumbers(n);
        for (int i = 0; i < n; i++)
        {
            cin >> reportedNumbers[i];
        }

        if (isRobotArrangementPossible(reportedNumbers))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
