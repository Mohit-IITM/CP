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
    string s;
    cin >> s;
    int ans = 0;
    bool f1 = true, f2 = false;
    forn(i, sz(s))
    {
        if (s[i] == 'Q' and f1)
        {
            f1 = false;
            f2 = true;
        }
        if (s[i] == 'A' and f2)
        {
            f2 = false;
            ans++;
            f1 = true;
        }
    }
    if (f2)
    {
        cout << ans << endl;
    }
    else
    {
        cout << ans - 1 << endl;
    }
}