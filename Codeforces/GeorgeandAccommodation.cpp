#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> p >> q;

        if (q - p >= 2)
        // if (p+2<=q)
        {
            count++;

        }
    }
    cout << count << endl;
}