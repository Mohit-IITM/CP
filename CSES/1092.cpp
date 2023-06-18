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

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    if (n % 4 != 0 && (n + 1) % 4 != 0)
    {
        na;
    }
    else
    {
        ya;
        if (n % 4 == 0)
        {
            cout << n / 2 << endl;
            forn(i, n / 4)
            {
                cout << i + 1 << " " << n - i << " ";
            }
            cout << endl;
            cout << n / 2 << endl;
            forsn(i, n / 4, n / 2)
            {
                cout << i + 1 << " " << n - i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << n - n / 2 << endl;
            cout << 1 << " " << 2 << " ";
            forn(i, (n - 3) / 4)
            {
                cout << i + 4 << " " << n - i << " ";
            }
            cout << endl;
            cout << n / 2 << endl;
            cout << 3 << " ";
            for (int i = (n - 3) / 4; i < (n - 3) / 2; i++)
            {
                cout << i + 4 << " " << n - i << " ";
            }
            cout << endl;
        }
    }
}