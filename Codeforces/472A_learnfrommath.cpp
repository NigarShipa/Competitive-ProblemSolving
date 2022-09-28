#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        int res1 = n - 6;
        int res2 = n - res1;
        cout << res1 << " " << res2 << endl;
    }
    else
    {
        int res1 = n - 9;
        int res2 = n - res1;
        cout << res1 << " " << res2 << endl;
    }
}