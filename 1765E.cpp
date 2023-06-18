#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (a > b)
    {
        cout << 1 << endl;
    }
    else
    {
        if (n % a == 0)
        {
            cout << n / a << endl;
        }
        else
        {
            cout << n / a + 1 << endl;
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