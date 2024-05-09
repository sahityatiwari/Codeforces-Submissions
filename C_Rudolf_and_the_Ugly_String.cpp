#include <bits/stdc++.h>
using namespace std;

#define int long long



signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
         int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        string ans = "";
        for (int j = i; j < i + 3; j++)
        {
            ans += s[j];
        }
        if (ans == "map" || ans == "pie")
        {
            count++;
            i += 2;
        }
    }
    
        cout << count << "\n";
    }

    return 0;
}
