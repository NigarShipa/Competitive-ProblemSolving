#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        // cout<<int(ceil(n/2.0))-1<<endl;
        if (n & 1)
        {
            int x = n / 2;
            cout << x << endl;
        }
        else
        {
            int y = n / 2;
            cout << y - 1 << endl;
        }
    }

    // int nn=1234567890;
    // while(nn){
    //     int ld=nn%10;
    //     cout<<ld<<endl;
    //     nn/=10;
    // }
}