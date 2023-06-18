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
    vector<int> a(n);
    forn(i, n)
    {
        cin >> a[i];
    }
    sort(all(a));
    int pl = 0;
    int tm = m;
    forn(i, n)
    {
        if (a[i] > tm)
        {
            break;
        }
        tm -= a[i];
        pl++;
    }
    vector<int> b(n);
    forn(i, n)
    {
        if (i <= pl)
        {
            b[i] = i;
        }
        else
        {
            b[i] = i + 1;
        }
    }
    set<int> s;
    s.insert(pl);
    forn(i, n)
    {
        s.insert(b[i]);
    }
    vector<int> c;
    for (auto x : s)
    {
        c.push_back(x);
    }
    sort(all(c), greater<int>());
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == pl)
        {
            cout << i + 1 << endl;
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