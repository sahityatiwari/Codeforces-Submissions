// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> a(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> a[i];
//         }

//         int res = 1;

//         while (1)
//         {
//             res *= 2;
//             for (int i = 1; i < n; i++)
//             {
//                 if (a[i] % res != a[i - 1] % res)
//                 {

//                     cout << res << endl;
//                     return ;
//                 }
//             }
//         }
//     }

// }
