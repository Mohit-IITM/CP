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
    int ma, mi;
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    if (n % 4 == 2)
    {
        ma = (n - 6) / 4 + 1;
    }
    else if (n % 4 == 0)
    {
        ma = n / 4;
    }
    else
    {
        ma = -1;
    }
    if (n % 6 == 2)
    {
        mi = (n - 8) / 6 + 2;
    }
    else if (n % 6 == 4)
    {
        mi = (n - 4) / 6 + 1;
    }
    else if (n % 6 == 0)
    {
        mi = n / 6;
    }
    else
    {
        mi = -1;
    }
    if (mi == -1 or ma == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << mi << " " << ma << endl;
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