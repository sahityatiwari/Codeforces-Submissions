#include <bits/stdc++.h>
using namespace std;
#define int long long

string findSmallestWord(const vector<string> &a)
{
    string s = a[0][0] +  a[0][1] + a[0][2];
    return s;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> grid(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> grid[i];
    }

    string result = findSmallestWord(grid);

    cout << result << "\n";

    return 0;
}
