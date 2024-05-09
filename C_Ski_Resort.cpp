#include <bits/stdc++.h>
using namespace std;
#define int long long

int countVacationDates(int n, int k, int q, vector<int> &a)
{

    int count = 0;
    int sum = 0;
    vector<int> win;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= q)
        {
            count++;
        }
        else
        {
            if (count >= k)
            {

                int x = count - k + 1;

                int y = x * (x + 1) / 2;
                sum += y;
            }
            count = 0;
        }
    }
    if (count >= k)
    {

        int x = count - k + 1;

        int y = x * (x + 1) / 2;
        sum += y;
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
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> temperatures(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> temperatures[i];
        }

        int result = countVacationDates(n, k, q, temperatures);
        cout << result << "\n";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int solve()
// {
//     int n, k, q;
//     cin >> n >> k >> q;
//     vector<long long> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     long long count = 0,ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] <= q)
//         {
//             count++;
//         }
//         else
//         {
//             if (count >= k)
//             {
//                 long long temp1 = count - k + 1;
//                 long long temp2 = (temp1 * (temp1 + 1)) / 2;
//                 ans += temp2;
//             }
//             count = 0;
//             // if (v[i] <= q)
//             // {

//             //     count = 1;
//             // }
//         }
//     }
//     if (count >= k)
//     {
//         long long temp1 = count - k + 1;
//         long long temp2 = (temp1 * (temp1 + 1)) / 2;
//         ans += temp2;
//     }
//     cout << ans << endl;
//     return 0;
// }
// int main()
// {
//     int testCase = 1;
//     cin >> testCase;
//     while (testCase--)
//     {
//         solve();
//     }
//     return 0;
// }