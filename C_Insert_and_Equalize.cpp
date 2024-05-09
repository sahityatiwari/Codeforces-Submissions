#include <bits/stdc++.h>
using namespace std;
#define int long long

int findHCF(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findHCFOfNumbers(vector<int> arr, int n)
{
    int hcf = arr[0];
    for (int i = 1; i < n; i++)
    {
        hcf = findHCF(hcf, arr[i]);
    }
    return hcf;
}

int solve(int n, vector<int> &a)
{

    vector<int> d(n);
    vector<int> b(n);
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
        b[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        d[i] = maxi - a[i];
    }
    sort(b.begin(), b.end());
    int hcf = findHCFOfNumbers(d, n);
    int ans = 0;

    if (hcf != 0)
    {

        for (int i = 0; i < a.size(); i++)
        {
            ans += ((maxi - a[i]) / hcf);
        }

        for (long long i = 1; i <= n; i++)
        {
            long long m = maxi - hcf * i;
            bool check = binary_search(b.begin(), b.end(), m);
            if (!check)
            {
                ans += i;
                break;
            }
        }
    }
    if (hcf == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return ans;
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << solve(n, a) << endl;
    }

    return 0;
}
