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
    int n;
    cin >> n;
    string s1, s2;
    forn(i, 2 * n - 2)
    {
        string x;
        cin >> x;
        if (sz(x) == n - 1)
        {
            if (s1.empty())
            {
                s1 = x;
            }
            else
            {
                s2 = x;
            }
        }
    }
    bool falg = true;
    forn(i, n - 1)
    {
        if (s1[i] == s2[n - 2 - i])
        {
            continue;
        }
        else
        {
            falg = false;
        }
    }
    if (falg)
    {
        ya;
    }
    else
    {
        na;
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