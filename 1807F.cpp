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
    int n, m, x, y, a, b;
    cin >> n >> m >> x >> y >> a >> b;
    string s;
    cin >> s;
    int vx, vy;
    if (s[0] == 'U')
        vx = -1;
    else if (s[0] == 'D')
        vx = 1;
    if (s[1] == 'L')
        vy = -1;
    else if (s[1] == 'R')
        vy = 1;
    int n1 = 0;
    x--;
    y--;
    a--;
    b--;
    int vxi = vx, vyi = vy, xi = x, yi = y;
    int i = 4 * (m + n);
    // cout << xi << " " << yi << " " << vxi << " " << vyi << endl;
    bool c1 = false;
    while (i--)
    {
        if (x == xi and y == yi and vx == vxi and vy == vyi)
        {
            if (c1)
            {
                cout << -1 << endl;
                return;
            }
            else
            {
                c1 = true;
            }
        }
        if (x == a and y == b)
        {
            cout << n1 << endl;
            return;
        }
        else if (x == n - 1)
        {
            if (vx > 0)
            {
                vx = -vx;
                n1++;
            }
            if (y == m - 1)
            {
                if (vy > 0)
                {
                    vy = -vy;
                }
            }
            else if (y == 0)
            {
                if (vy < 0)
                {
                    vy = -vy;
                }
            }
            n1++;
        }
        else if (x == 0)
        {
            if (vx < 0)
            {
                vx = -vx;
                n1++;
            }
            if (y == m - 1)
            {
                if (vy > 0)
                {
                    vy = -vy;
                }
            }
            else if (y == 0)
            {
                if (vy < 0)
                {
                    vy = -vy;
                }
            }
        }
        else if (y == m - 1)
        {
            if (vy > 0)
            {
                vy = -vy;
                n1++;
            }
            if (x == n - 1)
            {
                if (vx > 0)
                {
                    vx = -vx;
                }
            }
            else if (x == 0)
            {
                if (vx < 0)
                {
                    vx = -vx;
                }
            }
        }
        else if (y == 0)
        {
            if (vy < 0)
            {
                vy = -vy;
                n1++;
            }
            if (x == n - 1)
            {
                if (vx > 0)
                {
                    vx = -vx;
                }
            }
            else if (x == 0)
            {
                if (vx < 0)
                {
                    vx = -vx;
                }
            }
        }

        x += vx;
        y += vy;
        // cout << x << " " << y << " " << vx << " " << vy << endl;
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