#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    auto eq = {
        a + b + c,
        a * b * c,
        a + b * c,
        (a + b) * c,
        a * b + c,
        a * (b + c)};

    int res = max(eq);

    cout << res << endl;
}