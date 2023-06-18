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
    int a[m], b[n];
    map<int, int> mp;
    forn(i, m)
    {
        cin >> a[i];
    }
    forn(i, m)
    {
        mp[a[i]] = 0;
    }
    forn(i, m)
    {
        if (mp[a[i]] == 0)
        {
            mp[a[i]] = i + 1;
        }
    }
    int n1 = sz(mp);
    int r[n1];
    int c = 0;
    for (auto i : mp)
    {
        r[c] = i.second;
        c++;
    }
    sort(r, r + n1);
    forn(i, min(n, n1))
    {
        b[i] = r[i];
    }
    for (int i = n1; i < n; i++)
    {
        b[i] = -1;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << b[i] << " ";
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