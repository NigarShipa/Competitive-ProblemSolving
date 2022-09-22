#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;

    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int kthScore = arr[k - 1];

    int ans = 0;
    if (kthScore != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= kthScore)
                ans++;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > kthScore)
                ans++;
        }
    }
    cout << ans << endl;
}
