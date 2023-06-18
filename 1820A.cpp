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
    string s;
    cin >> s;
    int ans = 0;
    if (s[0] == '_')
    {
        ans++;
    }
    if (s[sz(s) - 1] == '_')
    {
        ans++;
    }
    if (sz(s) == 1)
    {
        if (s[0] == '^')
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 2 << endl;
            return;
        }
    }
    forn(i, sz(s) - 1)
    {
        if (s[i] == '_')
        {
            if (s[i + 1] == '_')
            {
                ans++;
            }
        }
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