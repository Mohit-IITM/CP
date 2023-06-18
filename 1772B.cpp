#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a[4], mi = INT_MAX;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (a[i] < mi)
        {
            mi = a[i];
        }
    }
    if (mi == a[0])
    {
        if (a[1] > a[0] && a[2] > a[0] && a[3] > a[1] && a[3] > a[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (mi == a[1])
    {
        if (a[0] > a[1] && a[3] > a[1] && a[2] > a[0] && a[2] > a[3])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (mi == a[2])
    {
        if (a[0] > a[2] && a[3] > a[2] && a[1] > a[0] && a[1] > a[3])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if (a[1] > a[3] && a[2] > a[3] && a[0] > a[1] && a[0] > a[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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
    return 0;
}