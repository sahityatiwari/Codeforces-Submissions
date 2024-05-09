#include <bits/stdc++.h>
using namespace std;

#define int long long

string solve(int n)
{
    if (n <= 4)
        return "Bob";
    else
        return "Alice";
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string result = solve(n);
        cout << result << "\n";
    }

    return 0;
}
