#include <bits/stdc++.h>
using namespace std;

#define int long long

int minMelodiesToObtain(const string &s);

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

        cout << minMelodiesToObtain(s) << endl;
    }

    return 0;
}

int minMelodiesToObtain(const string &s)
{

    int n = s.size();
    int count = 0;

    unordered_map<string, bool> m;
    for (int i = 0; i < n - 1; i++)
    {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        if (m[temp] != 1)
        {
            count++;
            m[temp] = 1;
        }
    }
    return count;
}
