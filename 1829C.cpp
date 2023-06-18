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
    int mi1 = LONG_LONG_MAX, mi2 = LONG_LONG_MAX, mi3 = LONG_LONG_MAX;
    bool c1 = false, c2 = false, c3 = false;
    forn(i, n)
    {
        int x;
        string s;
        cin >> x >> s;
        if (s[0] == '1' and s[1] == '0')
        {
            mi1 = min(mi1, x);
            c1 = true;
        }
        else if (s[1] == '1' and s[0] == '0')
        {
            mi2 = min(mi2, x);
            c2 = true;
        }
        else if (s[0] == '1' and s[1] == '1')
        {
            mi3 = min(mi3, x);
            c3 = true;
        }
    }
    if (c1 && c2 && c3)
    {
        cout << min(mi1 + mi2, mi3) << endl;
    }
    else if (c3)
    {
        cout << mi3 << endl;
    }
    else if (c1 && c2)
    {
        cout << mi1 + mi2 << endl;
    }
    else
    {
        cout << -1 << endl;
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