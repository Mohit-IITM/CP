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
    int n, m;
    cin >> n >> m;
    int a[n + m];
    forn(i, n + m) cin >> a[i];
    int ans = 0, bm = a[n + m - 1];
    sort(a, a + n + m, greater<int>());
    forn(i, n)
    {
        ans += a[i];
    }
    if (bm < a[n - 1])
    {
        ans += bm - a[n - 1];
    }
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