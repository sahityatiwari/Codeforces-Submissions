#include <bits/stdc++.h>
using namespace std;
#define int long long

bool is_possible_palindrome(string s, int k)
{

    int n = s.size();
    unordered_map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    int count = 0;
    for (int i = 0; i < m.size(); i++)
    {
        if (m[i] % 2 == 1)
            count++;
    }

    if(k < count-1)
    return false;
    else return true;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if (is_possible_palindrome(s, k))
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
