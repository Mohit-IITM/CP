#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, n1;
    cin >> n;
    if (n == 3)
    {
        cout << "NO" << endl;
    }
    else if (n % 2 == 1)
    {
        n1 = n / 2 - 1;
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << n1 << " ";
            }
            else
            {
                cout << -1 * (n1 + 1) << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << 1 << "  ";
            }
            else
            {
                cout << -1 << "  ";
            }
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
    return 0;
}