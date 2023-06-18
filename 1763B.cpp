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
    int n, k;
    cin >> n >> k;
    int a[n], b[n], ma = 0;
    forn(i, n)
    {
        cin >> a[i];
        ma = max(ma, a[i]);
    }
    forn(i, n)
    {
        cin >> b[i];
    }
    map<int, int> m;
    forn(i, n)
    {
        if (a[i] > m[b[i]])
        {
            m[b[i]] = a[i];
        }
    }
    int dmg = k;
    int ind = 0;
    sort(b, b + n);
    while (k > 0)
    {
        while (m[b[ind]] <= dmg and ind < n)
        {
            ind++;
        }
        if (ind == n)
        {
            ya;
            return;
        }
        k -= b[ind];
        dmg += k;
    }
    na;
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