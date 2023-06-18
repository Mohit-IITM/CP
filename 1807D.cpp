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
    int n, q;
    cin >> n >> q;
    int a[n];
    forn(i, n)
    {
        cin >> a[i];
    }
    int b[n + 1];
    b[0] = 0;
    forsn(i, 1, n + 1)
    {
        b[i] = b[i - 1] + a[i - 1];
    }
    forn(i, q)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int sa = b[n] - b[r] + b[l - 1];
        // cout << sa << endl;
        if (sa % 2 == 0)
        {
            if (k * (r - l + 1) % 2 == 0)
            {
                na;
            }
            else
            {
                ya;
            }
        }
        else
        {
            if (k * (r - l + 1) % 2 == 0)
            {
                ya;
            }
            else
            {
                na;
            }
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