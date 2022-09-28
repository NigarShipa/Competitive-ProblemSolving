#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool haveWePrintedCharecter = false;
    for (int i = 0; i < s.length() - 2; i++)
    {
        if (s[i] == 'W' && i + 1 < s.length() && s[i + 1] == 'U' && i + 2 < s.length() && s[i + 2] == 'B')
        {

            i += 2;
            if (haveWePrintedCharecter == true)
            {
                cout << " ";
                haveWePrintedCharecter = false;
            }
        }
        else
        {
            cout << s[i];
            haveWePrintedCharecter = true;
        }
    }
    cout << endl;
}