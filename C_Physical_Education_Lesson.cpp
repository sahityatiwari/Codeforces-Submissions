/*जय श्री महाकाल!*/
/* जय श्री गणेश! */
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double
#define inp0(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
#define inp1(a, n)               \
    for (int i = 1; i <= n; i++) \
    cin >> a[i]
#define out(x) cout << x << endl;
#define out0(a, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << a[i] << " ";    \
    }                           \
    cout << endl;
#define out1(a, n)               \
    for (int i = 1; i <= n; i++) \
    {                            \
        cout << a[i] << " ";     \
    }                            \
    cout << endl;
#define sz(s) (long long)(s.size())
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define ff first
#define ss second
#define pb push_back
#define rep(i, a, b) for (long long i = a; i < b; ++i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<long long>
#define vv vector<vector<long long>>
#define mii map<int, int>
const int MOD = 998244353;
#define INF (int)1e18

#define dbg(x) cout << #x << " is " << x << endl;
#define dbgarr(x)                      \
    cout << #x << " is:" << endl;      \
    for (int i = 0; i < x.size(); i++) \
    {                                  \
        cout << x[i] << " ";           \
    }                                  \
    cout << endl;
#define dbgarrp(x)                                               \
    cout << #x << " is:" << endl;                                \
    cout << "( ";                                                \
    for (int i = 0; i < x.size(); i++)                           \
    {                                                            \
        cout << "[" << x[i].first << " " << x[i].second << "],"; \
    }                                                            \
    cout << " )";                                                \
    cout << endl;
#define repr(i, b, a) for (long long i = b; i >= a; i--)

typedef tuple<int, int, int> state; // use tie(a,b,c)=(could be any tuple)

const bool testcases = true;

long long add(long long a, long long b, long long m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
const int N = 1005;

const int MAXN = 1000001;

int fact[MAXN], invFact[MAXN];

int power(int base, int exp)
{
    int result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (1LL * result * base) % MOD;
        }
        base = (1LL * base * base) % MOD;
        exp /= 2;
    }
    return result;
}

void precompute()
{
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < MAXN; ++i)
    {
        fact[i] = (1LL * fact[i - 1] * i) % MOD;
    }
    invFact[MAXN - 1] = power(fact[MAXN - 1], MOD - 2);
    for (int i = MAXN - 2; i >= 1; --i)
    {
        invFact[i] = (1LL * invFact[i + 1] * (i + 1)) % MOD;
    }
}

int nCr(int &n, int &r)
{
    int numerator = fact[n];
    int denominator = (1LL * invFact[r] * invFact[n - r]) % MOD;
    return (1LL * numerator * denominator) % MOD;
}

void solve()
{
   int n,x;
   cin>>n>>x;
   int cnt=0;
   for(int i=x;i<n;i++){
       if(n%i==x){
         cnt++;
       }
       else{
          if(x==1||x==i){
            continue;
          }
          else{
             int pos=(i-x)+i;
             if((pos<=n)&&((n%(i+i-2)==pos))){
                cnt++;
             }
          }
       }
       
   }
   cout<<cnt<<endl;
}
// out(ansreturn);

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    if (testcases)
        cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}