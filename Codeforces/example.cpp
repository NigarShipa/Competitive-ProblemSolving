#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    if (s[1] == '}')
    {
        cout << 0 << endl;
        return 0;
    }
    // if(s=="{}"){
    //     cout<<0<<endl;
    //     return 0;
    // }

    int memory[26];

    for (int i = 0; i < 26; i++)
    {
        memory[i] = 0;
    }

    for (int i = 1; i < s.length(); i += 3)
    {
        int mappedIndex = s[i] - 'a';
        memory[mappedIndex]++;
    }
    int distnictCount = 0;
    for (int i = 0; i < 26; i++)
    {
        if (memory[i] > 0)
        {
            distnictCount++;
        }
    }
    cout << distnictCount << endl;
}
