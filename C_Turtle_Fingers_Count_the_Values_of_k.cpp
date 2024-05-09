#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;
        set<int> s;
        int i = 0;
        while (pow(a, i) <= l)
        {
            int j = 0;
            while (pow(b, j) <= l)
            {

                int x = pow(a, i);
                int y = pow(b, j);
                if (l % (x * y) == 0)
                {
                    s.insert(l / (x * y));
                }
                j++;
            }
            i++;
        }
        cout << s.size() << endl;
    }
    return 0;
}
