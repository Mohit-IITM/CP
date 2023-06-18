#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
    }
    else
    {
        bool cond = true;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0 and i != n)
            {
                cout << n / i << " " << n - n / i << endl;
                cond = false;
                break;
            }
        }
        if (cond)
        {
            cout << 1 << " " << n - 1 << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}