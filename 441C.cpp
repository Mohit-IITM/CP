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
    int n, m, k;
    cin >> n >> m >> k;
    int x = 1, y = 1;
    int posx = 1, posy = 1;
    forn(i, k - 1)
    {
        cout << 2 << " ";
        forn(j, 2)
        {
            cout << y << " " << x << " ";
            if (posx)
            {
                if (x == m)
                {
                    y++;
                    posx = 0;
                }
                else
                {
                    x++;
                }
            }
            else
            {
                if (x == 1)
                {
                    y++;
                    posx = 1;
                }
                else
                {
                    x--;
                }
            }
        }
        cout << endl;
    }
    cout << n * m - 2 * (k - 1) << " ";
    forn(i, n * m - 2 * (k - 1))
    {
        cout << y << " " << x << " ";
        if (posx)
        {
            if (x == m)
            {
                y++;
                posx = 0;
            }
            else
            {
                x++;
            }
        }
        else
        {
            if (x == 1)
            {
                y++;
                posx = 1;
            }
            else
            {
                x--;
            }
        }
    }
    cout << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; // cin>>t;
    while (t--)
    {
        solv();
    }
}