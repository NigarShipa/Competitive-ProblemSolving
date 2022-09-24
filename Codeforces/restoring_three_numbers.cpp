#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[4];

    int mx=INT_MIN,mn=INT_MAX;
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
        if(x[i]>mx)
            mx=x[i];

        if(x[i]<mn){
            mn=x[i];
        }
    }
    cout<<mx<<" x "<<mn<<endl;

    sort(x, x + 4);
    cout << x[3] - x[1] << " " << x[3] - x[2] << " " << x[3] - x[0];
}