#include <bits/stdc++.h>
using namespace std;
#define int long long

string canObtainRectangle(int a, int b)
{

   if((a&1)&&(b&1)){
    return "No";
   }
   else if(a&1){
    int aa=a;
    int bb=b/2;
    if(bb==aa){
        return "No";
    }
    else{
     return "Yes";
    }
   }
   else if(b&1){
     int bb=b;
    int aa=a/2;
    if(bb==aa){
        return "No";
    }
    else{
     return "Yes";
    }
   }
   else{
       return "Yes";
   }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << canObtainRectangle(a, b) << endl;
    }
    return 0;
}
