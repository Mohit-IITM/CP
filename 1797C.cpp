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
    int n, m;
    int a, b, c;
    cin >> n >> m;
    cout << "? " << 1 << " " << 1 << endl;
    cout.flush();
    cin >> a;
    cout << "? " << 1 << " " << m << endl;
    cout.flush();
    cin >> b;
    int x1 = 1 + a;
    int y1 = 1 + a;
    int x2 = 1 + b;
    int y2 = m - b;
    if ((a == b and n >= m))
    {
        cout << "? " << x1 << " " << 1 << endl;
        cout.flush();
        cin >> c;
        cout << "! " << x1 << " " << c + 1 << endl;
    }
    else
    {
        cout << "? " << 1 << " " << y1 << endl;
        cout.flush();
        cin >> c;
        cout << "! " << c + 1 << " " << y1 << endl;
    }
}
int32_t main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}