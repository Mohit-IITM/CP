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
#define INF 1e18

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n, c, d;
    cin >> n >> c >> d;
    int a[n];
    map<int, int> m;
    forn(i, n)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    vector<int> v;
    int ans = 0;
    for (auto i : m)
    {
        ans += (i.second - 1) * c;
        v.push_back(i.first);
    }
    sort(all(v));
    int mi = INF;
    if (v[0] != 1)
    {
        int edg = c * sz(v) + d;
        mi = min(mi, edg);
    }
    forn(i, sz(v))
    {
        int x1 = (v[i] - 1 - i) * d + c * (sz(v) - i - 1);
        mi = min(x1, mi);
    }
    cout << ans + mi << endl;
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