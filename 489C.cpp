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

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, s;
    cin >> n >> s;
    bool fail = false;
    if (s == 0 and n != 1)
    {
        fail = true;
    }
    int s1 = s;
    int a[n];
    int ni = 9, on = 1;
    forn(i, n)
    {
        a[i] = min(ni, s1);
        s1 -= a[i];
    }
    if (s1 > 0)
    {
        fail = true;
    }
    string n1 = "";
    forn(i, n)
    {
        n1 += to_string(a[i]);
    }
    a[0] = max(on, s - ni * (n - 1));
    int s2 = s;
    s -= a[0];
    rforsn(i, n - 1, 1)
    {
        a[i] = min(ni, s);
        s -= a[i];
    }
    string n2 = "";
    forn(i, n)
    {
        n2 += to_string(a[i]);
    }

    if (fail)
    {
        cout << -1 << " " << -1 << endl;
    }
    else
    {
        if (s2 == 0)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            cout << n2 << " " << n1 << endl;
        }
    }
}