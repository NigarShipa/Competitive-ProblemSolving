#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        int count=0;

        int lm=sqrt(x);

        for (int j = 2; j <= lm; j++)
        {
            if (x % j == 0)
            {
                count+=(x/j==j)?1:2;
                if(count>1)break;
                //cout << j;
                // cout << count << endl;
            }
        }
        if (count == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}