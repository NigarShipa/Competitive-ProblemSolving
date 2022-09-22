#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count1 = 0, count2 = 0, count3 = 0;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i += 2)
    {
        if (s[i] == '1')
        {
            count1++;
        }
        else if (s[i] == '2')
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    //cout << count1 << count2 << count3 << endl;

    for (int i = 1; i <= count1; i++)
    {
        // cout << 1 << "+";
        cout << 1;
        if (count2!=0 || count3!=0 || i != count1)
        {
            cout << "+";
        }
    }
    for (int i = 1; i <= count2; i++)
    {
        // cout << 2 << "+";
        cout << 2;
        if (count3 != 0 || i != count2)
        {
            cout << "+";
        }
    }

    for (int i = 1; i <= count3; i++)
    {

        cout << 3;
        if (i != count3)
        {
            cout << "+";
        }
    }
}
