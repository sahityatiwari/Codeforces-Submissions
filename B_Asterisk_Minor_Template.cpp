#define NDEBUG
#include <bits/stdc++.h>
using namespace std;
#define int long long
#include <bits/stdc++.h>
using namespace std;
#define f(i, n) for (int i = 0; i < n; i++)
#define fp(i, a, b) for (int i = a; i <= b; i++)
#define fr(i, a, b) for (int i = a; i >= b; i--)
string lcsubstr(string s1, string s2)
{
    int len1 = s1.length(), len2 = s2.length();
    int dp[2][len2 + 1];
    int curr = 0, res = 0, end = 0;
    fp(i, 0, len1)
    {
        fp(j, 0, len2)
        {
            if (i == 0 || j == 0)
                dp[curr][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
            {
                dp[curr][j] = dp[1 - curr][j - 1] + 1;
                if (res < dp[curr][j])
                {
                    res = dp[curr][j];
                    end = i - 1;
                }
            }
            else
            {
                dp[curr][j] = 0;
            }
        }
        curr = 1 - curr;
    }
    if (res == 0)
        return "0";
    string ans;
    ans = s1.substr(end - res + 1, res);
    return ans;
}

pair<bool, string> myFindAsteriskMinorTemplate(const string &a, const string &b)

{
    string ans = lcsubstr(a, b);
    if (ans.size() == 0)
        return {0, ""};

    else if (ans.size() == 1)
    {
        if (a.find(ans) == 0 && b.find(ans) == 0)
            return {1, ans + '*'};
        else if (a.rfind(ans) == a.size() - 1 && b.rfind(ans) == b.size() - 1)
            return {1, '*' + ans};
        else
            return {0, ""};
    }

    else
        return {1, '*' + ans + '*'};
}

// Main function
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

        // Find and print the result
        pair<bool, string> result = myFindAsteriskMinorTemplate(a, b);
        cout << (result.first ? "YES" : "NO") << "\n";
        if (result.first)
        {
            cout << result.second << "\n";
        }
    }

    return 0;
}
