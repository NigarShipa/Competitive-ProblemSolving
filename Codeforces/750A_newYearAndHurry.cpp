#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int solved = (sqrt(25 + 9600 - 40 * k) - 5) / 10;
    cout << min(n, solved) << endl;
}