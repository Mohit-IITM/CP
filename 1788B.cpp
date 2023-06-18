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

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n;
    cin >> n;
    if (n % 10 == 9)
    {
        int r = 0;
        while (n % 10 == 9)
        {
            n /= 10;
            r++;
        }
        int a = n / 2, b = n - n / 2;
        forn(i, r)
        {
            if (i % 2 == 0)
            {
                a *= 10;
                a += 5;
                b *= 10;
                b += 4;
            }
            else
            {
                a *= 10;
                a += 4;
                b *= 10;
                b += 5;
            }
        }
        cout << a << " " << b << endl;
    }
    else
    {
        cout << n / 2 << " " << n - n / 2 << endl;
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