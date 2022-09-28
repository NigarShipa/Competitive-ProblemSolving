#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int v = abs(a - b);

        cout << (int)ceil(v / 10.0) << endl;

        // if (v % 10 == 0)
        // {
        //     cout << v / 10 << endl;
        // }
        // else
        // {
        //     cout << v / 10 + 1 << endl;
        // }
    }
}