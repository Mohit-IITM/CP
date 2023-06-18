#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n * n];
    a[0] = 1;
    for (int i = 1; i < n * n; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = a[i - 1] + i - n * n;
        }
        else
        {
            a[i] = a[i - 1] + n * n - i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[n * i + j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << a[n * i + j] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}