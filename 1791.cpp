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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a[n + 1], b[n], ma = 0;
    a[n] = 0;
    map<int, int> m;
    forn(i, n)
    {
        m[s[i] + 0]++;
    }
    forn(i, n)
    {
        a[i] = sz(m);
        for (auto m : m)
        {
            if (m.second == 0)
            {
                a[i]--;
            }
        }
        m[s[i] + 0]--;
    }
    if (n % 2 == 1)
    {
        // a[n / 2] = 0;
    }
    forn(i, n)
    {
        // cout << a[i] << " ";
        ma = max(a[i] + a[n - i], ma);
    }
    cout << ma << endl;
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