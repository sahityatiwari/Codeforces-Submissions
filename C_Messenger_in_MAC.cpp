#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxSetSize(int n, int l, vector<pair<int, int>> &a)
{
    
    for (int i = 0; i < n - 1; i++)
    {
        
        
    }
    
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        vector<pair<int, int>> messages(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> messages[i].first >> messages[i].second;
        }
        cout << maxSetSize(n, l, messages) << endl;
    }
    return 0;
}
