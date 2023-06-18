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
    int n1 = n;
    map<int, int> m;
    forn(i, 4)
    {
        int x = n % 10;
        m[x]++;
        n /= 10;
    }
    bool cond1 = false, cond2 = false;
    if (m.size() == 1)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        if (sz(m) == 2)
        {
            for (auto x : m)
            {
                if (x.second == 2)
                {
                    cond1 = true;
                }
                else
                {
                    cond2 = true;
                }
            }
            if (cond1)
            {
                cout << 4 << endl;
            }
            else
            {
                cout << 6 << endl;
            }
        }
        else
        {
            cout << 4 << endl;
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