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
    int a[n][2];
    a[0][0] = 2 * n;
    a[n - 1][1] = 2 * n - 1;
    forn(i, n)
    {
        forn(j, 2)
        {
            if (j == 0 and i == 0)
            {
                continue;
            }
            else if (j == 1 and i == n - 1)
            {
                continue;
            }
            else if ((i + j) % 2 == 0)
            {
                a[i][j] = n + i;
            }
            else
            {
                a[i][j] = i + 1;
            }
        }
    }
    forn(i, n)
    {
        cout << a[i][0] << " ";
    }
    cout << endl;
    forn(i, n)
    {
        cout << a[i][1] << " ";
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