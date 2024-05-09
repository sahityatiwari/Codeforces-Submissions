#include <bits/stdc++.h>
using namespace std;

#define int long long

bool canVisitAllPoints(const vector<pair<int, int>>& a) {

    int e = 0, b = 0, c = 0, d =0;

    for(int i =0; i < a.size() ; i++){
        if(a[i].first > 0){
            e++;
        }
      if(a[i].first < 0){
            b++;
        }
     if(a[i].second >0){
            c++;
        }
     if(a[i].second < 0){
            d++;
        }
    }
    if(e > 0 && b > 0 && c >0 && d>0)
    return false;
    else return true;

}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
        }

        cout << (canVisitAllPoints(points) ? "YES" : "NO") << '\n';
    }

    return 0;
}

