#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ans = "";
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (!(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i])== 'o' || tolower(s[i]) == 'u' || tolower(s[i]) == 'y'))
        {
            ans+='.';
            ans +=tolower(s[i]);
        
        }
    }
    cout<<ans<<endl;
}
