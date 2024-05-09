#include <bits/stdc++.h>
using namespace std;

#define int long long

int minOperationsToMakeProductZero(int N, vector<int>& A) {
    
    
    int mini = INT_MAX;
    for(int i =0; i< N; i++){
         mini = min(abs(A[i]), mini);
    }
    return mini;
}

signed main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = minOperationsToMakeProductZero(N, A);

    cout << result << endl;

    return 0;
}
