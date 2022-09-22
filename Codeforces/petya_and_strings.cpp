#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string a,b;
    // cin>>a>>b;
    // transform(a.begin(),a.end(),a.begin(),::tolower);
    // transform(b.begin(),b.end(),b.begin(),::tolower);
    // if(a<b){
    //     cout<<-1<<endl;
    // }
    // else if(a>b){
    //     cout<<1<<endl;
    // }
    // else{
    //     cout<<0<<endl;
    // }
    string x, y;
    cin >> x >> y;

    int ans=0;
    for (int i = 0; i <x.size() ; i++)
    {
        if (tolower(x[i]) < tolower(y[i]))
        {
            ans=-1;
            break;
        }
        else if (tolower(x[i]) > tolower(y[i]))
        {
            ans=1;
            break;
        }
    }
    cout<<ans<<endl;
}