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
    int ni = 0, nu = 0, tp = 0;
    forn(i, n)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            tp++;
            if (nu == ni)
            {
                ni++;
                nu++;
            }
            else
            {
                nu++;
            }
        }
        else
        {
            if (tp == 0)
            {
                continue;
            }
            else
            {
                nu = (tp) / 2 + 1;
            }
        }
        // cout << ni << " " << nu << " " << tp << endl;
    }
    cout << ni << endl;
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