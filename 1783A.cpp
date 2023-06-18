#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, temp, r = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[0])
        {
            temp = a[i];
            a[i] = a[0];
            a[0] = temp;
            break;
        }
        else
        {
            r++;
        }
    }
    if (r == n)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
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