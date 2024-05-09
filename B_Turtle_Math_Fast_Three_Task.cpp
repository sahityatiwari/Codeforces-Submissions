#include <bits/stdc++.h>
using namespace std;
#define int long long

int minMovesToMakeSumDivisibleByThree(vector<int> &a) {
    int n = a.size();
    int sum = 0;
    int cnt[3] = {0};

    for (int i = 0; i < n; ++i) {
        sum += a[i];
        cnt[a[i] % 3]++;
    }

    int moves = 0;
    
    if (sum % 3 == 0) {
        return moves;
    }

    int rem = sum % 3;


    if (rem == 1) {
  
        if (cnt[1] > 0) {
            moves = 1;
        }
 
        else {
            moves = 2;
        }
    }

    else if (rem == 2) {
    
      return 1;
    }

    return moves;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << minMovesToMakeSumDivisibleByThree(a) << endl;
    }
    return 0;
}
