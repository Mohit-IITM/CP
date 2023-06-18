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
    int h0, m0;
    cin >> h0 >> m0;
    int mmi = INT_MAX;
    int tab0 = h0 * 60 + m0;
    forn(i, n)
    {
        int h, m;
        cin >> h >> m;
        int ma, ha, f1;
        int tabs = h * 60 + m;
        if (tabs < tab0)
        {
            tabs += 24 * 60;
        }
        mmi = min(mmi, tabs - tab0);
    }
    cout << mmi / 60 << " " << mmi % 60 << endl;
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