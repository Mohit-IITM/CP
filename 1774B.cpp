#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k, c1 = 0;
    cin >> n >> m >> k;
    bool cond1 = false;
    int a[m], ma;
    if (n % k == 0)
    {
        ma = n / k;
    }
    else
    {
        ma = n / k + 1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (a[i] > ma)
        {
            cond1 = true;
        }
        if (a[i] == ma)
        {
            c1++;
        }
    }
    if (c1 > (n - 1) % k + 1)
    {
        cond1 = true;
    }
    if (cond1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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