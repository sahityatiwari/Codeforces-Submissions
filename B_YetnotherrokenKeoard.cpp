#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ll = 0;
        int uu = 0;
        string res = "";

        for (int i = n - 1; i >= 0; i--)
        {
            char ch = s[i];
            if (ch == 'b')
            {
                ll++;
            }
            else if (ch == 'B')
            {
                uu++;
            }
            else if (islower(ch))
            {
                if (ll == 0)
                    res += ch;
                else
                    ll--;
            }
            else if (isupper(ch))
            {
                if (uu == 0)
                    res += ch;
                else
                    uu--;
            }
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
    }

    return 0;
}
