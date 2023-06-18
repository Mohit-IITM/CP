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

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n], c[n + 1];
    c[0] = 0;
    int b[n + 1];
    b[0] = 0;
    forn(i, n) { cin >> a[i]; }
    int a1 = 0;
    forn(i, n)
    {
        b[i + 1] = b[i] + a[i];
    }
    if (n < 3 || b[n] % 3 != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int sum = b[n] / 3;
    forn(i, n)
    {
        if (b[i + 1] == sum)
        {
            a1++;
        }
        if (b[i + 1] == 2 * sum)
        {
            c[i + 1] = c[i] + 1;
        }
        else
        {
            c[i + 1] = c[i];
        }
    }
    if (sum == 0)
    {
        cout << (a1 - 1) * (a1 - 2) / 2 << endl;
    }
    else
    {
        int ans = 0;
        forn(i, n)
        {
            if (b[i + 1] == sum)
            {
                ans += c[n] - c[i + 1];
            }
        }
        cout << ans << endl;
    }
}