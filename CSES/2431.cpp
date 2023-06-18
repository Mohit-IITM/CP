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
    int k;
    cin >> k;
    int mult = 1;
    int ind;
    forn(i, 19)
    {
        int a;
        a = (i + 1) * 9 * mult;
        if ((k - a) <= 0)
        {
            ind = i + 1;
            break;
        }
        k -= a;
        mult *= 10;
    }
    int num = mult + (k - 1) / ind;
    int x = k % ind;
    if (x == 0)
    {
        x += ind;
    }
    string s = to_string(num);
    cout << s[x - 1] << endl;
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