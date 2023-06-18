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

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    int al = a1, bo = a1, ans = a1;
    if (a1 > 0)
    {
        int mi = min(a2, a3);
        ans += 2 * mi;
        a2 -= mi;
        a3 -= mi;
        // cout << a1 << " " << a2 << " " << a3 << " " << ans << endl;
        if (a3 > a1 or a2 > a1)
        {
            ans += a1 + 1;
            a1 = -1;
        }
        else
        {
            ans += a2 + a3;
            a1 -= a2;
            a1 -= a3;
        }
        if (a4 > a1)
        {
            ans += a1 + 1;
        }
        else
        {
            ans += a4;
        }
        cout << ans << endl;
    }
    else
    {
        cout << 1 << endl;
    }
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