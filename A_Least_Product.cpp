#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(int n, vector<int> &a)
{

    int e = 0, b = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] < 0)
            e++;
        
        if (a[i] == 0)
            b = 1;
    }
    if (e % 2 == 1 || b == 1)
    {
        cout << 0 << endl;
    }
    else {
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // Read input for each test case
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        solve(n, a);
    }

    return 0;
}
