#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int>a(n), x(n), v(n + 1, 0);
	int maxi = INT_MIN;
	int sm = 0;
	for(int i =0; i< n; i++){cin >> a[i]; sm += a[i];}
	for(int i =0; i< n; i++) {cin >> x[i]; v[abs(x[i])] += a[i];}
	map<int, int>mp;
	for(int i =0; i< n; i++) {
		mp[abs(x[i])] += a[i];
	}
	int f = 0;
	int rem = k;
	for(int i =1; i< n+1; i++) {
		if (rem < v[i]) {
			cout << "NO\n"; return;
		}
		rem = rem - v[i];
		rem += k;
	}
	cout << "YES\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
       solve();
    }
    return 0;
}
