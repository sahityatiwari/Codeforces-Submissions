#include <bits/stdc++.h>
using namespace std;
#define int long long

void printCheckerboard(int n)
{

    bool flag = 1;

    for (int i = 0; i < 2*n; i+=2)
    {
        flag = !flag;
        for (int j = 0; j < n; ++j)
        {
            if (flag == 0)
            {
                if (j % 2 == 0)
                    cout << "##";
                else
                {
                    cout << "..";
                }
            }
            else
            {
                if (j % 2 == 0)
                    cout << "..";
                else
                {
                    cout << "##";
                }
            }
        }
        cout<<endl;
        for (int j = 0; j < n; ++j)
        {
            if (flag == 0)
            {
                if (j % 2 == 0)
                    cout << "##";
                else
                {
                    cout << "..";
                }
            }
            else
            {
                if (j % 2 == 0)
                    cout << "..";
                else
                {
                    cout << "##";
                }
            }
        }
        cout << endl;
    }

}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        printCheckerboard(n);
    }
    return 0;
}
