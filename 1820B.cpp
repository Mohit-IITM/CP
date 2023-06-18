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
    string s;
    cin >> s;
    int n = sz(s);
    int n1 = 0, ma = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            n1++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            n1++;
        }
        else
        {
            break;
        }
    }
    int oc = 0, mc = 0;
    forn(i, n)
    {
        if (s[i] == '0')
        {
            oc = 0;
        }
        else
        {
            oc++;
            mc = max(mc, oc);
        }
    }
    n1 = min(n, n1);
    mc = max(n1, mc);
    // cout << mc << endl;
    if (mc == n)
    {
        cout << n * n << endl;
    }
    else
    {
        if (mc % 2 == 1)
        {
            cout << (mc / 2 + 1) * (mc / 2 + 1) << endl;
        }
        else
        {
            cout << (mc / 2) * (mc / 2 + 1) << endl;
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