#include <bits/stdc++.h>
using namespace std;

string solve(string num)
{
    int x = num.size();
    for (int i = num.size() - 1; i; i--)
        if (num[i] >= '5')
            num[i - 1]++, x = i;

    if (num[0] >= '5')
        cout << "1", x = 0;
    for (int i = x; i < num.size(); i++)
        num[i] = '0';
    return num;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string num;
        cin >> num;
        string ans = solve(num);
        cout << ans << endl;
    }
    return 0;
}
