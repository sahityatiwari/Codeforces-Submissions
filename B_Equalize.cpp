#include <bits/stdc++.h>
using namespace std;
#define int long long
#define dbg(x) cout << #x << " is " << x << endl;
#define dbgarr(x)                      \
    cout << #x << " is:" << endl;      \
    for (int i = 0; i < x.size(); i++) \
    {                                  \
        cout << x[i] << " ";           \
    }                                  \
    cout << endl;
#define dbgarrp(x)                                               \
    cout << #x << " is:" << endl;                                \
    cout << "( ";                                                \
    for (int i = 0; i < x.size(); i++)                           \
    {                                                            \
        cout << "[" << x[i].first << " " << x[i].second << "],"; \
    }                                                            \
    cout << " )";                                                \
    cout << endl;
int maxElementsEqual(int n, vector<int> &a)
{
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < n;)
    {
        dbg(i);
        int count = 1;
        int j = i + 1;
        while (j < n && a[j] - a[i] >= 1 && a[j] - a[i] <= n - 1)
        {
            dbg(j);
            count++;
            j++;
        }
        dbg(count);
        cout<<endl;
        ans = max(ans, count);
        i = j;
    }
    return ans;
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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cout << maxElementsEqual(n, a) << endl;
    }
    return 0;
}
