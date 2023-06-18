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
    int k;
    cin >> k;
    int a[31];
    forn(i, 31)
    {
        a[i] = (i + 1) * (i + 2) / 2;
    }
    int r;
    forn(i, 31)
    {
        if (k <= a[i])
        {
            r = i + 1;
            break;
        }
    }
    int pos = a[r - 1] - k;
    // cout << pos << endl;
    int el = 1;
    forn(i, r)
    {
        if (i == pos - 1)
        {
            cout << -pos << " ";
            el = pos + 1;
        }
        else
        {
            cout << el << " ";
        }
    }
    forsn(i, r, n)
    {
        cout << -n * el << " ";
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