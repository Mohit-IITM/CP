#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = 2; i < n + 2; i += 2)
        {
            cout << n - i / 2 << " ";
            cout << n + i / 2 << " ";
        }
    }
    else
    {
        cout << 4 * n << " " << 5 * n << " " << 3 * n << " ";
        for (int i = 0; i < (n - 3) / 2; i++)
        {
            cout << 3 * n + i + 1 << " ";
            cout << 5 * n - i - 1 << " ";
        }
    }
    cout << endl;
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