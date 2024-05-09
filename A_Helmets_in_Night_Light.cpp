// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// // int minimumCostToNotify(int n, int p, vector<int> &a, vector<int> &b)
// // {
// //     vector<pair<int, int>> v;
// //     for (int i = 0; i < n; i++)
// //     {
// //         v[i].first = b[i];
// //         v[i].second = a[i];
// //     }
// //     int i = 0;
// //     sort(v.begin(), v.end());

// //     int ans = p;
// //     int rem = n - 1;

// //     for (int i = 0; i < n - 1; i++)
// //     {

// //         ans += min(v[i].second, rem) * v[i].first;
// //         rem -= min(v[i].second, rem);
// //     }

// //     return ans;
// // }

// // signed main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     int t;
// //     cin >> t;

// //     while (t--)
// //     {
// //         int n, p;
// //         cin >> n >> p;

// //         vector<int> a(n);
// //         for (int i = 0; i < n; ++i)
// //         {
// //             cin >> a[i];
// //         }

// //         vector<int> b(n);
// //         for (int i = 0; i < n; ++i)
// //         {
// //             cin >> b[i];
// //         }

// //         cout << minimumCostToNotify(n, p, a, b) << "\n";
// //     }

// //     return 0;
// // }
// bool compare(pair<int,int> a, pair<int,int> b)
// {
//     return a.second<b.second;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     //freopen("maxnumber.in", "r", stdin);
//     //freopen("maxnumber.out", "w", stdout);
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         long long n,p;
//         cin>>n>>p;
//         vector <pair<int,int>> v(n);
//         for (int i=0; i<n; i++)
//         {
//             cin>>v[i].first;
//         }
//         for (int i=0; i<n; i++)
//         {
//             cin>>v[i].second;
//         }
//         sort(v.begin(), v.end(), compare);
//         long long ans=p;
//         int n1=n-1;
//         for (int i=0; n1>0; i++)
//         {
//             //cout<<ans<<"\n";
//             if (v[i].second>=p) {ans+=p*n1; break;}
//             if (v[i].first>=n1) {ans+=v[i].second*n1; n1=0;}
//                 else
//                 {
//                     ans+=v[i].first*v[i].second; n1-=v[i].first;
//                 }
//         }
//         cout<<min(ans,p*n)<<"\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
bool compare(pair<int,int> a, pair<int,int> b)
{
    return a.second<b.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("maxnumber.in", "r", stdin);
    //freopen("maxnumber.out", "w", stdout);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,p;
        cin>>n>>p;
        vector <pair<int,int>> v(n);
        for (int i=0; i<n; i++)
        {
            cin>>v[i].first;
        }
        for (int i=0; i<n; i++)
        {
            cin>>v[i].second;
        }
        sort(v.begin(), v.end(), compare);
        ll ans=p;
        int n1=n-1;
        for (int i=0; n1>0; i++)
        {
            //cout<<ans<<"\n";
            if (v[i].second>=p) {ans+=p*n1; break;}
            if (v[i].first>=n1) {ans+=v[i].second*n1; n1=0;}
                else
                {
                    ans+=v[i].first*v[i].second; n1-=v[i].first;
                }
        }
        cout<<min(ans,p*n)<<"\n";
    }
    return 0;
}