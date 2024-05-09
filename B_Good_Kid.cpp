#include <bits/stdc++.h>
using namespace std;
#define int long long

int maximumProduct(int n, vector<int> &digits)
{

    int mini = digits[0];
    int x = 0;
    int product = 1;
    for (int i = 1; i < n; i++)
    {
        if (digits[i] < mini)
        {
            mini = digits[i];
            x = i;
        }
    }

    digits[x] += 1;

    for (int i = 0; i < n; i++)
    {
        product *= digits[i];
    }
    return product;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> digits(n);
        for (int i = 0; i < n; i++)
        {
            cin >> digits[i];
        }

        int result = maximumProduct(n, digits);
        cout << result << endl;
    }

    return 0;
}
