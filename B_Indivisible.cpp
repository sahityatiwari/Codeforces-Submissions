#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> findPermutation(int n)
{
vector<int>ans(n);
    if (n == 1)
        return {1};
    else if (n % 2 == 1)
        return {-1};
    else{
        for(int i = 0; i< n; i++){
           ans[i] = i+1;
        }
        for(int i = 0; i< n-1; i = i+2){
        swap(ans[i],ans[i+1]);
        }
    return ans;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> result = findPermutation(n);

        
            for (int i = 0; i < result.size(); ++i)
            {
                cout << result[i] << " ";
            }
        

        cout << "\n";
    }

    return 0;
}
