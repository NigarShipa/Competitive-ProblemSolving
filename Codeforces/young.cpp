
#include <iostream>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int x = ((w * k) + (w * w * k)) / 2;
    int res = x - n;
    // cout<<n-x<<endl;
    
    if (n >= x)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << res << endl;
    }
}
