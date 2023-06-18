#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, mi = 0, ma = 0;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[0])
        {
            mi++;
        }
        if (a[i] == a[n - 1])
        {
            ma++;
        }
    }
    if (a[0] == a[n - 1])
    {
        cout << n * (n - 1) << endl;
        return;
    }
    cout << ma * mi * 2 << endl;
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