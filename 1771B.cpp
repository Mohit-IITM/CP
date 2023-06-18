#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
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

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n, m, an = 0;
    cin >> n >> m;
    int a[m], b[m], c[n];
    forn(i, n) { c[i] = n; }
    // cout << n << " " << m << endl;
    forn(i, m)
    {
        cin >> a[i] >> b[i];
        if (a[i] > b[i])
        {
            swap(a[i], b[i]);
        }
        // cout << a[i] << endl;
    }
    forn(i, m)
    {
        if (c[a[i] - 1] > b[i] - 1)
        {
            c[a[i] - 1] = b[i] - 1;
            // cout << a[i] - 1 << " " << b[i] - 1 << endl;
        }
    }
    rforn(i, n - 2)
    {
        c[i] = min(c[i], c[i + 1]);
    }
    forn(i, n)
    {
        // cout << c[i] << " ";
        an += c[i] - i;
    }
    // cout << endl;
    cout << an << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}