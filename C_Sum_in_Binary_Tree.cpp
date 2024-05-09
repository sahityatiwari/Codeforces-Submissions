#include <bits/stdc++.h>
using namespace std;
#define int long long

int findSumInBinaryTree(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n;
        n = n / 2;
    }
    return sum;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sum = findSumInBinaryTree(n);
        cout << sum << "\n";
    }

    return 0;
}
