#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    bool allCapital = true;

    for (int i = 1; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            allCapital = false;
        }
    }
    if (allCapital)
    {
        if (isupper(s[0]))
        {
            cout << (char)tolower(s[0]);
        }
        else
        {
            cout <<(char) toupper(s[0]);
        }
        for (int i = 1; i < len; i++)
        {
            cout << (char)tolower(s[i]);
        }
        cout << endl;
    }
    else
    {
        cout << s << endl;
    }
}