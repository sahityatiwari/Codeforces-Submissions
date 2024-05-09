#include <bits/stdc++.h>
using namespace std;
#define int long long

string isPossibleToSort(string s)
{

    int count = 0;
    if (s[0] != 'a')
        count++;
    if (s[1] != 'b')
        count++;
    if (s[2] != 'c')
        count++;

    if (count <= 2)
        return "YES";
    else
        return "NO";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string result = isPossibleToSort(s);
        cout << result << endl;
    }

    return 0;
}
