#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(string a)
{

    int n = a.size();
    int count = 0;
    int sum = 0;
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 'A')
        {
            count++;
            if (a[i + 1] == 'B')
            {
                sum += count;
                swap(a[i], a[i + 1]);
                count = 0;
            }
        }
    }
    return sum;
}
    signed main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while (t--)
        {
            int n;
            cin >> n;

            string s;
            cin >> s;

            cout << solve(s) << "\n";
        }

        return 0;
    }
