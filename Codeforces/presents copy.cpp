#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n;
    int e[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        e[p-1]=i;
        
    }
    for (int i = 0; i <n; i++)
    {   
        cout << e[i] << endl;
    }
}