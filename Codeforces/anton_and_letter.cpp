#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if(s[1]== '}')
    {
        cout<<0<<endl;
        return 0;
    }
    int mem[26];
    for (int i = 0; i < 26; i++)
    {
        mem[i] = 0;
    }

    for (int i = 1; i < s.length(); i += 3)
    {
        // char ch = s[i];
        // int mappedIndex = ch - 'a';
        // mem[mappedIndex] = mem[mappedIndex] + 1; or
        // mem[mappedIndex]++;
        //mem[s[i] - 'a']++;
         int mappedIndex=s[i]-'a';
         mem[mappedIndex]++;
    }
    // for(int i=0;i<26;i++)
    //{
    // cout<<mem[i]<<endl;
    //}

    int distinctCount = 0;

    for (int i = 0; i < 26; i++)
    {
        if (mem[i] > 0)
        {
            distinctCount++;
        }
    }

    cout << distinctCount << endl;
}
