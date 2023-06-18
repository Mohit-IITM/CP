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
    int t;
    cin >> t;
    int f[46];
    f[0] = 1;
    f[1] = 1;
    map<int, int> mp1;
    map<int, bool> mp2;
    for (int i = 2; i <= 44; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    forn(i, 45)
    {
        mp1[f[i]] = i;
        mp2[f[i]] = true;
    }
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a, b;
        a = f[n];
        b = f[n + 1];
        int ar1 = a * b;
        bool c1 = false, c2 = false, c3 = false, c4 = false;
        if (x == 1)
        {
            c1 = true;
        }
        if (y == 1)
        {
            c2 = true;
        }
        if (c1 and c2)
        {
            ya;
            continue;
        }
        if (mp2[x - 1] or c1)
        {
            if (c1)
            {
                if ((n) % 2 == mp1[y - 1] % 2)
                {
                    c3 = true;
                }
            }
            else if (mp2[y - 1] or c2)
            {

                if (c2)
                {
                    if ((n + 1) % 2 == mp1[x - 1] % 2)
                    {
                        c3 = true;
                    }
                }
                else if (mp1[x - 1] % 2 != mp1[y - 1] % 2)
                {
                    if ((n) % 2 == mp1[y - 1] % 2)
                    {
                        c3 = true;
                    }
                }
            }
            else if (mp2[y - 2])
            {
                if (mp1[x - 1] % 2 != mp1[y - 2] % 2)
                {
                    if ((n) % 2 == mp1[y - 2] % 2)
                    {
                        c3 = true;
                    }
                }
            }
        }
        else if (mp2[x - 2])
        {
            if (mp2[y - 1])
            {
                if (mp1[x - 2] % 2 != mp1[y - 1] % 2)
                {
                    if ((n) % 2 == mp1[y - 1] % 2)
                    {
                        c3 = true;
                    }
                }
            }
        }
        if (c3)
        {
            ya;
        }
        else
        {
            na;
        }
    }
}