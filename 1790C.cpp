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
    int a[n];
    int c[n][n - 1];
    forn(i, n)
    {
        forn(j, n - 1)
        {
            cin >> c[i][j];
        }
    }
    if (n == 3)
    {
        if (c[0][0] == c[1][0] || c[0][0] == c[2][0])
        {
            a[0] = c[0][0];
        }
        else
        {
            a[0] = c[1][0];
        }
    }
    else
    {
        forn(i, n - 1)
        {
            if (c[i][0] == c[i + 1][0])
            {
                a[0] = c[i][0];
                break;
            }
        }
    }
    forn(i, n)
    {
        if (c[i][0] != a[0])
        {
            forn(j, n - 1)
            {
                a[j + 1] = c[i][j];
            }
            break;
        }
    }
    forn(i, n)
    {
        cout << a[i] << " ";
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