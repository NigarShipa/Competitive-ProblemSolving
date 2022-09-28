#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, reservePolice = 0, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            if (reservePolice > 0)
            {
                reservePolice--;
            }
            else
            {
                count++;
            }
        }
        else
        {
            reservePolice = reservePolice + x;
        }
    }
    cout << count << endl;
}