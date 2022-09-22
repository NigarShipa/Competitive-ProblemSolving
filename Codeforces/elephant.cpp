#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    int c = x / 5;
    if (x % 5 > 0)
    {
        c++;
    }

    cout << c;
}