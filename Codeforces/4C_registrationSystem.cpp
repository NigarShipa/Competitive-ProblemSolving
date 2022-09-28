#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }
        else{
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    }

    //     int n;
    //     cin >> n;

    //     string ar[n];
    //     int count[n];
    //     int uniqueFound=0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         string s;
    //         cin >> s;

    //         bool matched=false;
    //         for(int j=0;j<uniqueFound;j++){
    //             if(s==ar[j]){
    //                 cout<<s<<count[j]<<endl;
    //                 count[j]++;
    //                 matched=true;
    //                 break;
    //             }
    //         }
    //         if(!matched){
    //             cout<<s<<endl;
    //             ar[uniqueFound]=s;
    //             count[uniqueFound]=1;
    //             uniqueFound++;
    //         }

    //     }
}