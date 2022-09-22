#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, c = 0;


  //logic
  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        cout<<" Prime number";
  }
  else {
         cout<<" not a Prime number";
  }
  return 0;    
}

