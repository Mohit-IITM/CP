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
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int a[t], ans = 0, ans1 = 0;
    forn(i, t)
    {
        cin >> a[i];
    }
    forn(i, t - 1)
    {
        if (a[i + 1] > a[i])
        {
            ans1++;
            if (ans1 > ans)
            {
                ans = ans1;
            }
        }
        else
        {
            ans1 = 0;
        }
    }
    cout << ans + 1 << endl;
}