#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int  x, res;
    cin >> x;
    if (x % 2 == 0)
    {
        res = x / 2;
        // cout<<res<<endl;
    }
    else
    {
        res = ((x / 2) + 1) * (-1);
    }
    cout << res << endl;
}