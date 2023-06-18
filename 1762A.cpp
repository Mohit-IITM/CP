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
    int n;
    cin >> n;
    int a[n], sum = 0;
    int mi = LONG_LONG_MAX, mi1 = LONG_LONG_MAX;
    forn(i, n)
    {
        cin >> a[i];
        int x = a[i], co = 0, x1 = a[i], co1 = 0;
        while (x % 2 == 0)
        {
            x /= 2;
            co++;
        }
        while (x1 % 2 == 1)
        {
            x1 /= 2;
            co1++;
        }
        if (co == 0)
        {
            mi = min(mi, co1);
        }
        if (co1 == 0)
        {
            mi1 = min(mi1, co);
        }
        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << min(mi1, mi) << endl;
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