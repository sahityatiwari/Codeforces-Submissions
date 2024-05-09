// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int minTimeToAcquireSkills(int n, vector<pair<int, pair<int, int>>> &books);

// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<pair<int, pair<int, int>>> books(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> books[i].first >> books[i].second.first >> books[i].second.second;
//         }

//         cout << minTimeToAcquireSkills(n, books) << endl;
//     }

//     return 0;
// }

// int minTimeToAcquireSkills(int n, vector<pair<int, pair<int, int>>> &books)
// {
//     // int m01 = INT_MAX;
//     // int m10 = INT_MAX;
//     // int m11 = INT_MAX;
//     // int m00 = INT_MAX;

//     // for (int i = 0; i < n; i++)
//     // {
//     //   int s1 =books[i].first ;
//     //   int s2 = books[i].second.first ;
//     //   int val =  books[i].second.second;

//     //     if (s1 == 1 && s2 == 0)
//     //     {
//     //         m10 = min(m10, val);
//     //     }
//     //     else if (s1 == 0 && s2 == 1)
//     //     {
//     //         m01 = min(m01, val);
//     //     }
//     //     else if (s1 == 1 && s2 == 1)
//     //     {
//     //         m11 = min(m11, val);
//     //     }
//     //     else
//     //     {
//     //         m00 = INT_MAX;
//     //     }
//     // }
//     //   if(min(m11, m01 + m10) >= INT_MAX)
//     //  return -1;
//     //  else
//     //  return min(m11, m01 + m10);
//     return books[0].first;


// }

#include <bits/stdc++.h>
using namespace std;

#define int long long

int minTimeToAcquireSkills(int n, vector<pair<int, string>>& books);

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int, string>> books(n);
        for (int i = 0; i < n; ++i) {
            cin >> books[i].first >> books[i].second;
        }

        cout << minTimeToAcquireSkills(n, books) << endl;
    }

    return 0;
}

int minTimeToAcquireSkills(int n, vector<pair<int, string>>& books) {
     int m01 = INT_MAX;
    int m10 = INT_MAX;
    int m11 = INT_MAX;
    int m00 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
      int s1 =books[i].first ;
      int s2 = books[i].second[0] ;
      int val =  books[i].second[1];

        if (s1 == '1' && s2 == '0')
        {
            m10 = min(m10, val);
        }
        else if (s1 == '0' && s2 == '1')
        {
            m01 = min(m01, val);
        }
        else if (s1 == '1' && s2 == '1')
        {
            m11 = min(m11, val);
        }
        else
        {
            m00 = INT_MAX;
        }
    }
      if(min(m11, m01 + m10) >= INT_MAX)
     return -1;
     else
     return min(m11, m01 + m10);
    
}
