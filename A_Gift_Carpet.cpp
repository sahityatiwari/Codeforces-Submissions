#include <bits/stdc++.h>
using namespace std;

#define int long long

string willVikaLikeCarpet(int n, int m, vector<vector<char>> &carpet)
{

    string s = "vika";
    int k = 0;
    int j = 0;
    int i = 0, count = 0;
    ;

    while (j < m)
    {
        i= 0;
        while (i < n && j < m )
        {
            if (carpet[i][j] == s[k])
            {
                count++;
                j = j + 1;
                i = 0;
                k++;    
            }
            else
                i++;
        }
        j++;
        
    }
    if (count == 4)
    {
        return "YES";
    }
    else
        return "NO";
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> carpet(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> carpet[i][j];
            }
        }

        string result = willVikaLikeCarpet(n, m, carpet);

        cout << result << endl;
    }

    return 0;
}
