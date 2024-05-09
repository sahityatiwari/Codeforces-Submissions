#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cpp(const vector<int>& x, int k, int d) {
    int p = 1;
    int lp = x[0];
    int i =1;
    while(i < x.size()) {
        if (x[i] - lp >= d) {
            p++;
            lp = x[i];
            if (p >= k) {
                return true;
            }
        }
        i++;
    }
    
    return false;
}

int maximizeMinimumDistance(vector<int>& x, int k) {
    sort(x.begin(), x.end());
    
    int l = 1; 
    int r = x.back() - x.front(); 
    
    int result = -1;
    
    while (l <= r) {
        int mid = l + (r - l) / 2;
        
        if (cpp(x, k, mid)) {
            result = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    int k;
    cin >> k;
    
    int maxMinDistance = maximizeMinimumDistance(x, k);
    cout << maxMinDistance << endl;
    
    return 0;
}