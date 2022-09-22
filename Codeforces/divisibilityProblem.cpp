#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a % b != 0)
        {
            int res = a / b;
            res = res + 1;
            res = res * b;
            res = res-a;
            cout << res << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}