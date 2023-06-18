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
    int n, m;
    cin >> n >> m;
    int lm = 0, rm = 0;
    int mi = m, ma = 0;
    set<int> a;
    forn(i, n)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            lm++;
        }
        else if (x == -2)
        {
            rm++;
        }
        else
        {
            a.insert(x);
            mi = min(mi, x);
            ma = max(ma, x);
        }
    }
    int ans = 0, pass = 1;
    int l = sz(a);
    for (auto x : a)
    {
        int tans = 0;
        int c1 = false;
        tans += min(x, lm + pass);
        tans += min(m - x, rm + l - pass);
        // cout << tans << " " << x << endl;
        ans = max(ans, tans);
        pass++;
    }
    ans = max(ans, lm + l);
    ans = max(ans, rm + l);
    ans = min(ans, m);
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