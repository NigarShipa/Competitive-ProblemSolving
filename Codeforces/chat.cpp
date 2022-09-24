#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Count = 0, s2Count = 0;
    string s1;
    cin >> s1;
    string s2 = "hello";
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[s2Count])
        {
            Count++;
            s2Count++;
        }
    }
    if (Count == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
