#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n;

    bool mem[n+1];
    for(int i=0;i<n+1;i++){
        mem[i]=false;
    }

    int p;
    cin>>p;

    for(int i=0;i<p;i++){
       cin>>l;
       mem[l]=true; 
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
       cin>>l;
       mem[l]=true; 
    }
    bool allTrue=true;
    for(int i=1;i<=n;i++){
        if(mem[i]==false){
            allTrue=false;
        }
    }
    if (allTrue)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    // int n, p, q, i, count = 0;
    // cin >> n;

    // cin >> p;

    // int ar[250];
    // for (int i = 0; i < p; i++)
    // {
    //     cin >> ar[i];
    // }
    // cin >> q;
    // for (int i = 0; i < q; i++)
    // {
    //     cin >> ar[p+i];
    // }
    // sort(ar,ar+p+q);
   
    // for (int i = 0; i < p + q-1; i++)
    // {
    //     if (ar[i] != ar[i + 1])
    //     {
    //         count++;
    //     }
    // }
    // // cout<<"C: "<<count<<endl;
    // if ((p!=0 || q!=0) && count == n-1)
    // {
    //     cout << "I become the guy." << endl;
    // }
    // else
    // {
    //     cout << "Oh, my keyboard!" << endl;
    // }
}