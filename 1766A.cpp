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

int rou[1000000];
void solv()
{
    int n;
    cin >> n;
    cout << rou[n] << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    rou[0] = 0;
    forsn(i, 1, 1e6)
    {
        int x = i;
        while (x % 10 == 0)
        {
            x /= 10;
        }
        if (x < 10)
        {
            rou[i] = rou[i - 1] + 1;
        }
        else
        {
            rou[i] = rou[i - 1];
        }
    }
    while (t--)
    {
        solv();
        // cout << t << endl;
    }
}