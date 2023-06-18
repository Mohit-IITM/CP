#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void solve()
{
    int n, k, in = 1;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == in)
        {
            in++;
        }
    }
    in--;
    if (n == in)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (n - in - 1) / k + 1 << endl;
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