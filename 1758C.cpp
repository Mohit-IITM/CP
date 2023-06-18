#include <iostream>
using namespace std;
void solve()
{
    int n, x, x1;
    cin >> n >> x;
    if (x == n)
    {
        cout << x << " ";
        for (int i = 2; i < n; i++)
        {
            cout << i << " ";
        }
        cout << 1;
    }
    else if (n % x == 0)
    {
        cout << x << " ";
        x1 = x;
        for (int i = 2; i < n; i++)
        {
            if (i == x1)
            {
                for (int i = x1 + 1; i <= n; i++)
                {
                    if (i % x1 == 0 and n % i == 0)
                    {
                        cout << i << " ";
                        x1 = i;
                        break;
                    }
                }
            }
            else
            {
                cout << i << " ";
            }
        }
        cout << 1;
    }
    else
    {
        cout << -1;
    }
    cout << "\n";
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