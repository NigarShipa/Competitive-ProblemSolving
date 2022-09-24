#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totalMillilitersOfDrink = k * l;

    int makeToaste = totalMillilitersOfDrink / nl;
    int LimesEnough = c * d;
    int SaltEnough = p / np;
    int NumberOfToastsEachFriendCanMake = min({makeToaste, LimesEnough, SaltEnough});
    cout << NumberOfToastsEachFriendCanMake / n << endl;


}