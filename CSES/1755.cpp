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

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    map<char, int> m;
    int no = 0;
    forn(i, sz(s))
    {
        m[s[i]] = 0;
    }
    forn(i, sz(s))
    {
        m[s[i]]++;
    }
    for (auto i : m)
    {
        if (i.second % 2 != 0)
        {
            no++;
        }
    }
    if (no != sz(s) % 2)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        string ans = "";
        string ans2 = "";
        string ans3 = "";
        for (auto i : m)
        {
            if (i.second % 2 == 0)
            {
                forn(j, i.second / 2)
                {
                    ans += i.first;
                    ans2 += i.first;
                }
            }
            else
            {
                forn(j, i.second)
                {
                    ans3 += i.first;
                }
            }
        }
        reverse(all(ans2));
        ans += ans3 + ans2;
        cout << ans;
    }
}