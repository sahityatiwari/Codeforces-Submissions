#include <bits/stdc++.h>
using namespace std;
#define int long long

int minVaccinePacks(int n, int k, int d, int w, vector<int> &a)
{
    int y = k - 1;
    int x = a[0] + d + w;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > x || y == 0)
        {
            count++;
            x = a[i] + w + d;
            y = k - 1;
        }
        else
        {
            y--;
        }
    }
    return count;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, d, w;
        cin >> n >> k >> d >> w;

        vector<int> patients(n);
        for (int i = 0; i < n; i++)
        {
            cin >> patients[i];
        }

        int result = minVaccinePacks(n, k, d, w, patients);

        cout << result << "\n";
    }

    return 0;
}
