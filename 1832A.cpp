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
    map<int, int> mp;
    forn(i, sz(s))
    {
        mp[s[i] + 0] = 0;
    }
    forn(i, sz(s))
    {
        mp[s[i] + 0]++;
    }
    if (sz(mp) == 1)
    {
        na;
    }
    else if (sz(mp) == 2)
    {
        for (auto x : mp)
        {
            if (x.second == 1)
            {
                na;
                return;
            }
        }
        ya;
    }
    else
    {
        ya;
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