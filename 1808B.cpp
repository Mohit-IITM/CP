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
    int a[n][m];
    forn(i, n)
    {
        forn(j, m)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    forn(i, m)
    {
        vector<int> v;
        forn(j, n)
        {
            v.push_back(a[j][i]);
        }
        sort(all(v));
        for (int i = 0; i < n / 2; i++)
        {
            ans += (v[n - 1 - i] - v[i]) * (n - 1 - 2 * i);
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