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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n, 0), c(n, -1);
    forn(i, n)
    {
        cin >> a[i];
    }
    int ma = a[0];
    forn(i, n - 1)
    {
        if (a[i + 1] > ma)
        {
            ma = a[i + 1];
        }
        b[ma - 1] = i + 1;
        if (c[ma - 1] == -1)
        {
            c[ma - 1] = i + 1;
        }
    }
    forn(i, q)
    {
        int ind, k;
        cin >> ind >> k;
        int el = a[ind - 1] - 1;
        if (el == n - 1)
        {
            cout << max(k - c[el] + 1, 0LL) << endl;
            continue;
        }
        if (c[el] == -1)
        {
            cout << 0 << endl;
            continue;
        }
        if (k < c[el])
        {
            cout << 0 << endl;
            continue;
        }
        if (k >= c[el] && k <= b[el])
        {
            cout << k - c[el] + 1 << endl;
            continue;
        }
        if (k > b[el])
        {
            cout << b[el] - c[el] + 1 << endl;
            continue;
        }
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