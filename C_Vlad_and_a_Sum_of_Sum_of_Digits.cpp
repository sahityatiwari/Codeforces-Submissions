#include <bits/stdc++.h>
using namespace std;
#define int long long



int sum(int num) {
    int sum = 0;
    int x = 9; 
    while (1) {
        if (num < x) {
            sum += (num * (num + 1)) / 2; 
            break;
        }
        num -= x;
        sum += (x * (x + 1)) / 2;
        x++;
    }
    return sum;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << sum(n) << "\n";
    }
    return 0;
}
