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
    int n, m;
    cin >> n >> m;
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int ans = 4;
    if (x1 == 1)
    {
        if (y1 == 1 or y1 == m)
        {
            cout << 2 << endl;
            return;
        }
        ans = 3;
    }
    if (x1 == n)
    {
        if (y1 == 1 or y1 == m)
        {
            cout << 2 << endl;
            return;
        }
        ans = 3;
    }
    if (y1 == 1)
    {
        if (x1 == 1 or x1 == n)
        {
            cout << 2 << endl;
            return;
        }
        ans = 3;
    }
    if (y1 == m)
    {
        if (x1 == 1 or x1 == n)
        {
            cout << 2 << endl;
            return;
        }
        ans = 3;
    }
    if (y2 == 1)
    {
        if (x2 == 1 or x2 == n)
        {
            cout << 2 << endl;
            return;
        }
        ans = 3;
    }
    if (y2 == m)
    {
        if (x2 == 1 or x2 == n)
        {
            cout << 2 << endl;
            return;
        }
        ans = 3;
    }
    if (x2 == 1)
    {
        if (y2 == 1 or y2 == m)
        {
            cout << 2 << endl;
            return;
        }
        ans = 3;
    }
    if (x2 == n)
    {
        if (y2 == 1 or y2 == m)
        {
            cout << 2 << endl;
            return;
        }
        ans = 3;
    }
    cout << ans << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}