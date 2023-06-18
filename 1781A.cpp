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
    int w, h, d, ans = 0;
    cin >> w >> d >> h;
    int a, b, f, g;
    cin >> a >> b >> f >> g;
    ans += h + min(abs(a - f) + min(abs(d - g) + abs(d - b), g + b), abs(b - g) + min(abs(w - a) + abs(w - f), a + f));
    cout << ans << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}