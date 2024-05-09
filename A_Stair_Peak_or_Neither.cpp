#include <bits/stdc++.h>
using namespace std;
#define int long long

string classify(int a, int b, int c) {
    if(b > a && c > b)
    return "STAIR";
    else if(b >a && b > c)
    return "PEAK";
    else return "NONE";
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << classify(a, b, c) << endl;
    }
    return 0;
}
