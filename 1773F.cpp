#include <bits/stdc++.h>
#include <chrono>
#include <random>
#include <iomanip>
#include <fstream>

using namespace std;

/* ************************************************************************************************************************************ */
typedef long long ll;
typedef long double ld;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define endl "\n"
#define ya cout << "YES" << endl;
#define na cout << "NO" << endl;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define int long long
int mod = 1000000007;

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n, a, b;
    cin >> n >> a >> b;
    int draws = max(n - a - b, 0LL);
    if (n == 1)
    {
        if (a == b)
        {
            cout << 1 << endl;
            cout << a << ":" << a << endl;
        }
        else
        {
            cout << 0 << endl;
            cout << a << ":" << b << endl;
        }
        return;
    }
    cout << draws << endl;
    {
        if (draws == 0)
        {
            if (a >= n)
            {
                if (b == 1)
                {
                    cout << a + 2 - n << ":" << 0 << endl;
                    forn(i, n - 2)
                    {
                        cout << 1 << ":" << 0 << endl;
                    }
                    cout << 0 << ":" << b << endl;
                }
                else
                {
                    cout << a + 1 - n << ":" << 0 << endl;
                    forn(i, n - 2)
                    {
                        cout << 1 << ":" << 0 << endl;
                    }
                    cout << 1 << ":" << b << endl;
                }
            }
            else
            {
                forn(i, a)
                {
                    cout << 1 << ":" << 0 << endl;
                }
                forn(i, n - a - 1)
                {
                    cout << 0 << ":" << 1 << endl;
                }
                cout << 0 << ":" << b - (n - a - 1) << endl;
            }
        }
        else
        {
            forn(i, a)
            {
                cout << 1 << ":" << 0 << endl;
            }
            forsn(i, a, a + b)
            {
                cout << 0 << ":" << 1 << endl;
            }
            forsn(i, a + b, n)
            {
                cout << 0 << ":" << 0 << endl;
            }
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solv();
    }
}