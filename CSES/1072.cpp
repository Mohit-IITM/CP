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

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout << 0 << endl;
    cout << 6 << endl;
    forsn(k, 3, n + 1)
    {
        int ans = 0;
        ans += 4 * (k * k - 2);
        ans += 4 * (k - 2) * (k * k - 4);
        if (k >= 5)
        {
            ans += ((k - 2) * (k - 2) - 8) * ((k - 2) * (k - 2) - 9) / 2;
        }
        cout << ans << endl;
    }
}