#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int minCount = 0;
    int bit = 1;
    for (int i = 0; i < 31; i++)
    {
        if (x & bit)
        {
            minCount++;
        }
        bit = bit << 1;
        // bit<<=1;
    }
    cout << minCount << endl;

    // int ans=0;
    // for(int i=0;i<31;i++)
    //{
    //      if(x & (1<<i))
    //{
    //          ans++;
    //}
    //}
    // cout<<ans<<endl;
}