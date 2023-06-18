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
    map<int, map<int, int>> mp;
    bool flag = false;
    char pr;
    int co = 0;
    forn(i, n - 1)
    {
        pr = s[i];
        mp[s[i] + 0][s[i + 1] + 0]++;
        // cout << s[i] << " " << s[i + 1] << endl;
        if (pr == s[i + 1])
        {
            co++;
            // cout << co << endl;
            if (co == 2)
            {
                mp[s[i] + 0][s[i + 1] + 0]--;
            }
        }
        else
        {
            co = 0;
        }
    }
    for (auto i : mp)
    {
        for (auto j : i.second)
        {
            if (j.second > 1)
            {
                flag = true;
            }
        }
    }
    if (flag)
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
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}