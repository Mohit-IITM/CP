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
    int n, k, d, w;
    cin >> n >> k >> d >> w;
    int a[n];
    int to = 0, nu = 1, ans = 1;
    forn(i, n)
    {
        cin >> a[i];
    }
    int i = 0;
    int r = 0;
    while (i + r < n)
    {
        if (a[i + r] - a[i] - w <= d and nu <= k)
        {
            nu++;
            r++;
        }
        else
        {
            ans++;
            nu = 1;
            i = i + r;
            r = 0;
        }
        // cout << i << " " << r << " " << nu << " " << ans << endl;
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