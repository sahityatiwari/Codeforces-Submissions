#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool canMakeEqualStrings(string &a, string &b)
{
int f = 0;
    
        for(ll i = 0 ; i < (ll)a.size() ; i++) {
            if((a[i] == '0' and b[i] == '0') and (a[i+1] == '1' and b[i+1] == '1')) {
                f = 1;
                break;
            }
        }
        if(f)
         return 1;
        else
            return 0;
    
}

    signed main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while (t--)
        {
            string a, b;
            cin >> a >> b;

            if (canMakeEqualStrings(a, b))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }

        return 0;
    }
