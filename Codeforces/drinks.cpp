#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, a;
    double res, sum = 0.0;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> a;
        sum = sum + a;
    }
    res = sum / x;
    cout << fixed << setprecision(12) << res << endl;
}
