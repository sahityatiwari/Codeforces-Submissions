#include <bits/stdc++.h>
using namespace std;
#define int long long

int findWinner(int n, vector<pair<int, int>> &a)
{

    int maxi = INT_MIN;
    int x;

    for (int i = 0; i < n; i++)
    {
        if (a[i].first <= 10 && maxi < a[i].second){
            x  = i+1;
            maxi = max(maxi,a[i].second);
        }
    }
    return x;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> responses(n);

        for (int i = 0; i < n; i++)
        {
            cin >> responses[i].first >> responses[i].second;
        }

        int result = findWinner(n, responses);
        cout << result << "\n";
    }

    return 0;
}
