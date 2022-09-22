#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, total = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        total = total - a + b;
        if(total>ans)
        {
            ans=total;
            
        }   
    }
    cout<<ans;
    

}