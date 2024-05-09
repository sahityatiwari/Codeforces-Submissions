#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int calculate_w(int n, double c, vector<double> &a)
{
    double sq = 0, sm = 0;
    for (double i : a)
    {
        sq += pow(i, 2);
        sm += i;
    }

    double d = sq - c;
    double coef_a = 4 * n;
    double coef_b = 4 * sm;

    double discriminant = coef_b * coef_b - 4 * coef_a * d;
    double root1 = (-coef_b + sqrt(discriminant)) / (2 * coef_a);
    double root2 = (-coef_b - sqrt(discriminant)) / (2 * coef_a);

  
    int rounded_root1 = static_cast<int>(round(root1));
    int rounded_root2 = static_cast<int>(round(root2));

    return max(rounded_root1, rounded_root2);
}


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        double c;
        cin >> n >> c;
        vector<double> sizes(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> sizes[i];
        }
        int result = calculate_w(n, c, sizes);

        cout << result << endl;
    }

    return 0;
}
