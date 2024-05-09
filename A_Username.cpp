#include <bits/stdc++.h>
using namespace std;
#define int long long

string generateUsername(string s)
{

    int n = s.size();
    int x;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] >= '1' && s[i] <= '9')
        {
            x = i;
            break;
        }
    }
    string ans = "";
    for (int i = 0; i < x; i++)
    {
        ans += s[i];
    }
    return ans;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        cout << generateUsername(s) << "\n";
    }

    return 0;
}
