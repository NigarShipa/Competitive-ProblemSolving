#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r1, r2, r3, r4, r5;
    cin >> n;

    r1 = n / 100;
    n %= 100;

    r2 = n / 20;
    n %= 20;

    r3 = n / 10;
    n %= 10;

    r4 = n / 5;
    n %= 5;

    int r = r1 + r2 + r3 + r4 + n;

    //cout << x << y << z << p << q << endl;
    cout << r << endl;
}