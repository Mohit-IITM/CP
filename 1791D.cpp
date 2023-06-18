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
    int a[n + 1], b[n], ma = 0, c[n + 1];
    map<int, int> m, m1;
    forn(i, n)
    {
        m[s[i] + 0]++;
        m1[s[i] + 0]++;
    }
    a[0] = sz(m);
    c[n] = sz(m1);
    forn(i, n)
    {
        if (m[s[i] + 0] > 1)
        {
            a[i + 1] = a[i];
            m[s[i]]--;
        }
        else
        {
            a[i + 1] = a[i] - 1;
            m[s[i] + 0]--;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (m1[s[i] + 0] > 1)
        {
            c[i] = c[i + 1];
            m1[s[i] + 0]--;
        }
        else
        {
            c[i] = c[i + 1] - 1;
            m1[s[i] + 0]--;
        }
    }
    forn(i, n)
    {
        ma = max(a[i] + c[i], ma);
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