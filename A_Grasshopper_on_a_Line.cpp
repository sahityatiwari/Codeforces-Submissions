#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> findMoves(int x, int k)
{
    vector<int> moves;
    if (x % k == 0)
    {
        moves.push_back(x - 1);
        moves.push_back(1);
    }
    else
    moves.push_back(x);
    return moves;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        vector<int> moves = findMoves(x, k);

        cout << moves.size() << endl;
        for (int i = 0; i < moves.size(); i++)
        {
            cout << moves[i];
            if (i < moves.size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
