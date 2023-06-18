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
    vector<int> a(n * m);
    forn(i, n * m)
    {
        cin >> a[i];
    }
    sort(all(a));
    int ma = a[n * m - 1], mi = a[0];
    int ans = (a[n * m - 1] - a[0]) * (n * m - min(n, m)) + (a[n * m - 1] - a[1]) * (min(n, m) - 1);
    int ans1 = (a[n * m - 1] - a[0]) * (n * m - min(n, m)) + (a[n * m - 2] - a[0]) * (min(n, m) - 1);
    cout << max(ans, ans1) << endl;
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