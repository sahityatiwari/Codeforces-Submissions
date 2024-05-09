#include <bits/stdc++.h>
using namespace std;
#define int long long

int countConversationsPossible(int n, int m, int k, int H, vector<int> &h)
{
    int count = 0;
    int x;
    for (int i = 0; i < h.size(); i++)
    {
        int diff = abs(h[i] - H);
        if (diff % k == 0 && diff / k < m && diff != 0)
            count++;
    }
    return count;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        vector<int> h(n);

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int result = countConversationsPossible(n, m, k, H, h);
        cout << result << "\n";
    }

    return 0;
}
