#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ex[5]; 
    int len = s.length();
    for (int i = 0; i < len; i = +2)
    {
        if (s[i] == '1')
        {
            ex[1]++;
        }
        else if(s[i] == '2')
        {
            ex[2]++;
        }
        else                           //incorrect answer 
        {
            ex[3]++;
        }
    }
    for(int i=1;i<=3 ;i++)
    {
        for(int j=0;j<ex[i];j++)
        {
            cout<<i<<endl;
        }
    }
}
