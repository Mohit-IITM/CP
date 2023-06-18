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
    int a, b;
    cin >> a >> b;
    if (a > b + 1)
    {
        cout << -1 << endl;
        return;
    }
    if (b > 2 * (a + 1))
    {
        cout << -1 << endl;
        return;
    }
    int n = a + b;
    if (a >= b)
    {
        forn(i, n)
        {
            if (i % 2 == 0)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
        cout << endl;
        return;
    }
    while (b > a && b > 1 && a > 0)
    {
        cout << 110;
        b -= 2;
        a--;
    }
    if (a == b)
    {
        forn(i, a)
        {
            cout << 10;
        }
        cout << endl;
        return;
    }
    if (a == 0)
    {
        forn(i, b)
        {
            cout << 1;
        }
        cout << endl;
        return;
    }
    cout << endl;
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