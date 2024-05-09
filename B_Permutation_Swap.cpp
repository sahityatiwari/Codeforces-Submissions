#include <bits/stdc++.h>
using namespace std;

#define int long long

int maximumK(const vector<int> &p);

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> p[i];
        }

        cout << maximumK(p) << endl;
    }

    return 0;
}

int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int maximumK(const vector<int> &p)
{

    int ans = 0;
    int n = p.size();
    for (int i = 0; i < p.size(); i++)
    {

        if (i - p[i] + 1 != 0)
            ans= hcf(abs(i - p[i] + 1), ans);
    }
    return ans;
}
