#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3, dis,m;
    cin >> x1 >> x2 >> x3;
    int x = max({x1, x2, x3});
    int y = min({x1, x2, x3});
    cout<<x-y<<endl;
}
    