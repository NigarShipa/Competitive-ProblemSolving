#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i] == 1)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
}
