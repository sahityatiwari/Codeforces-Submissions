#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isPossible(const vector<int> &arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
  
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == mini)
        count++;

    }

    if (count == 1)
    {
        return true;
    }
    else if (count > 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % mini != 0)
                return true;
        }
    }

    return false;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        if (isPossible(arr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
