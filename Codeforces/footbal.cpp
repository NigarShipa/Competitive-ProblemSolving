#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count = 1;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len - 1 && count < 7; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
    }
    cout << (count >= 7 ? "YES" : "NO") << endl;
}