#include <bits/stdc++.h>
using namespace std;
#define int long long

pair<bool, string> findMissingString(int n, int k, const string &s, int m)
{
    unordered_map<char, int> mp;

    char c = 'a';
    for (int i = 0; i < k; i++)
    {
        mp[c]++;
        c++;
    }

    vector<char> missingChars;

    int count = 0;
    for (int i = 0; i < m; i += k)
    {
        set<char> ch;
        for (int j = i; j < i + k; j++)
        {
            ch.insert(s[j]);
        }

        if (ch.size() != k)
        {
            count++;
            for (int l = i; l < i + k; l++)
            {
                mp[s[l]]--;
            }
            char v = 'a';
            for (int i = 0; i < k; i++)
            {
                if (mp[v] == 1)
                {
                    missingChars.push_back(v);
                }
                v++;
            }
        }
    }

    if (count == 0)
    {
        return {true, ""};
    }
    else
    {
        string missingString(missingChars.begin(), missingChars.end());
        return {false, missingString};
    }
}

void solveTestCase()
{
    int n, k, m;
    cin >> n >> k >> m;

    string s;
    cin >> s;

    pair<bool, string> sp = findMissingString(n, k, s, m);
    if (sp.first)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO" << endl;
        cout << sp.second;
    }
    cout << endl;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solveTestCase();
    }

    return 0;
}
