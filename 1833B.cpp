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
    vector<int> a(n), b(n);
    vector<pair<int, int>> c(n);
    forn(i, n)
    {
        cin >> a[i];
        c[i] = {a[i], i};
    }
    forn(i, n)
    {
        cin >> b[i];
    }
    sort(all(b));
    sort(all(c));
    forn(i, n)
    {
        a[c[i].second] = b[i];
    }
    forn(i, n)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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