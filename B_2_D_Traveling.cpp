#include <bits/stdc++.h>
using namespace std;
long long x[200010], y[200010];
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, k, a, b, ans, ans1 = 1e10, ans2 = 1e10;
		cin >> n >> k >> a >> b;
		for (int i = 1; i <= n; i++)
			cin >> x[i] >> y[i];
		ans = abs(x[a] - x[b]) + abs(y[a] - y[b]);
		for (int i = 1; i <= k; i++)
		{
			ans1 = min(abs(x[i] - x[a]) + abs(y[i] - y[a]), ans1);
			ans2 = min(abs(x[i] - x[b]) + abs(y[i] - y[b]), ans2);
			ans = min(ans1 + ans2, ans);
		}
		cout << ans << endl;
	}
}

