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
    int pos = 0, neg = 0;
    forn(i, n)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    // cout << pos << " " << neg << endl;
    forn(i, pos)
    {
        cout << i + 1 << " ";
    }
    forn(i, neg)
    {
        cout << pos - 1 - i << " ";
    }
    cout << endl;
    forn(i, neg)
    {
        cout << 1 << " " << 0 << " ";
    }
    forn(i, n - 2 * neg)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
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