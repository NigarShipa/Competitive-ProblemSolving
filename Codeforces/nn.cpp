#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str[0] == '+')
        {
            ++x;
        }
        else if (str[0] == '-')
        {
            --x;
        }
        else if (str[str.length() - 1] == '+')
        {
            x++;
        }
        else if (str[str.length() - 1] == '-')
        {
            x--;
        }
    }

    cout << x << endl;
    return 0;
}