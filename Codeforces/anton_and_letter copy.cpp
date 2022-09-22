#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if(s[1]=='}')
    {
        cout<<0<<endl;
        return 0;
    }
    bool mem[26];
    for(int i=0;i<26;i++){
        mem[i]=false;
    }
    
    int len = s.length();
    for (int i = 1; i < len; i += 3)
    { 
        char ch=s[i];
        int mappedIndex=ch-'a';
        mem[mappedIndex]=true;
        // mem[mappedIndex]++;
    }
    int distinctCount=0;

    for(int i=0;i<26;i++){
        if(mem[i]==true){
            distinctCount++;
        }
    }

    cout << distinctCount << endl;
}
