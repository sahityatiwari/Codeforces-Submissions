#include <bits/stdc++.h>
using namespace std;
#define int long long

int minimumMovesToEqualizeWater(float a, float b, float c)
{

    float y = abs(a - b) / 2;
    int z = y / c;
    float r = y - z * c;

    if (r == 0)  
        return z;
    else
        return z + 1;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b, c;
        cin >> a >> b >> c;

        int result = minimumMovesToEqualizeWater(a, b, c);
        cout << result << endl;
    }

    return 0;
}
