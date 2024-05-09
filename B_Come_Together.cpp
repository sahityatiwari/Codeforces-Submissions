#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxSharedCells(int ax, int ay, int bx, int by, int cx, int cy)
{

    if ((((ax - bx <= 0) && (ax - cx >= 0)) || ((ax - bx >= 0) && (ax - cx <= 0))) &&
        (((ay - by <= 0) && (ay - cy >= 0)) || ((ay - by >= 0) && (ay - cy <= 0))))
    {
        return 1;
    }
    else if (((ax - bx <= 0) && (ax - cx >= 0)) || ((ax - bx >= 0) && (ax - cx <= 0)))
    {
        int b = abs(ay - by) + 1;
        int c = abs(ay - cy) + 1;
        return min(b, c);
    }
    else if (((ay - by <= 0) && (ay - cy >= 0)) || ((ay - by >= 0) && (ay - cy <= 0)))
    {
        int b = abs(ax - bx) + 1;
        int c = abs(ax - cx) + 1;
        return min(b, c);
    }
    else
    {
        int b = min(abs(ax - bx),abs(ax - cx));
        int c = min(abs(ay - by),abs(ay - cy)); 
        return b+c+1;
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int xA, yA, xB, yB, xC, yC;
        cin >> xA >> yA >> xB >> yB >> xC >> yC;

        int result = maxSharedCells(xA, yA, xB, yB, xC, yC);
        cout << result << "\n";
    }

    return 0;
}
