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
    int n, m, d;
    cin >> n >> m >> d;
    int p[n], a[m];
    forn(i, n)
    {
        cin >> p[i];
    }
    forn(i, m)
    {
        cin >> a[i];
    }
    int pos[n];
    forn(i, n)
    {
        pos[p[i] - 1] = i + 1;
    }
    int miu = 1e9;
    forn(i, m - 1)
    {
        int mi = 1e9;
        if (pos[a[i] - 1] < pos[a[i + 1] - 1] && pos[a[i + 1] - 1] <= pos[a[i] - 1] + d)
        {
            if (n > d + 1)
            {
                mi = min(pos[a[i] - 1] + d + 1 - pos[a[i + 1] - 1], pos[a[i + 1] - 1] - pos[a[i] - 1]);
            }
            else
            {
                mi = pos[a[i + 1] - 1] - pos[a[i] - 1];
            }
        }
        else
        {
            mi = 0;
        }
        if (mi < miu)
        {
            miu = mi;
        }
    }
    if (miu == 1e9)
    {
        miu = 0;
    }
    cout << miu << endl;
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