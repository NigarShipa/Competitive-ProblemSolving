#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int upper = 0, lower = 0;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
        if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
    }
    for (int i = 0; i < len; i++)
    {
        if (upper > lower)
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
}


