#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    for (int s = 1; s <= n; s++)
    {
        for (int i = 0; i < n; i++)
        {

            if (ar[i] == s)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}