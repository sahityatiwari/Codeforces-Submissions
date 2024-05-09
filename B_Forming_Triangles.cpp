#include <iostream>
#include <vector>
#include <algorithm>

#define int long long

using namespace std;

int countTriangles(int n, vector<int> &sticks) {
    
    sort(sticks.begin(), sticks.end());

    int count = 0;

    for (int i = n - 1; i >= 2; i--) {
        int left = 0, right = i - 1;

        while (left < right) {
            if (sticks[left] + sticks[right] > sticks[i]) {

                count += (right - left);
                right--;
            } else {
                left++;
            }
        }
    }
    return count;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> sticks(n);
        for (int i = 0; i < n; i++) {
            cin >> sticks[i];
            // Doubling the stick lengths as described in the problem statement
            sticks[i] *= 2;
        }

        int result = countTriangles(n, sticks);
        cout << result << "\n";
    }

    return 0;
}
