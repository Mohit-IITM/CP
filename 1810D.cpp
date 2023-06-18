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
    int q;
    cin >> q;
    int homi = -1, homa = -1;
    forn(i, q)
    {
        int x, hma, hmi;
        cin >> x;
        if (x == 1)
        {
            int a, b, n;
            cin >> a >> b >> n;
            if (homa == -1)
            {
                homa = (n - 1) * (a - b) + a;
                if (n == 1)
                {
                    homi = 1;
                }
                else
                {
                    homi = (n - 2) * (a - b) + a + 1;
                }
                // cout << homi << " " << homa << endl;
            }
            hma = (n - 1) * (a - b) + a;
            if (n == 1)
            {
                hmi = 1;
            }
            else
            {
                hmi = (n - 2) * (a - b) + a + 1;
            }
            if (hmi > homa)
            {
                cout << 0 << " ";
            }
            else if (hma < homi)
            {
                cout << 0 << " ";
            }
            else
            {
                homi = max(homi, hmi);
                homa = min(homa, hma);
                cout << 1 << " ";
                // cout << homi << " " << homa << endl;
            }
        }
        else
        {
            int a, b;
            cin >> a >> b;
            int n1, n2, n3 = 1;
            if (a >= homa)
            {
                n1 = 1;
                n2 = 1;
            }
            else if (a >= homi)
            {
                n1 = 1;
                n2 = (homa - a - 1) / (a - b) + 2;
            }
            else
            {
                n1 = (homi - a - 1) / (a - b) + 2;
                n2 = (homa - a - 1) / (a - b) + 2;
            }
            if (homa == -1)
            {
                cout << -1 << " ";
            }
            else if (n1 == n2)
            {
                cout << n1 << " ";
            }
            else
            {
                cout << -1 << " ";
            }
        }
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