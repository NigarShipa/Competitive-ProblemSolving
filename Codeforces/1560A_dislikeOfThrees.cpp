#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1001];
    int count = 0;
    for (int i = 1; i <= 1666; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            count++;
            a[count] = i;
            
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << a[k] << endl;
    }
}