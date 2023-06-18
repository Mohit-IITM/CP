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
    int n, k;
    cin >> k >> n;
    int a[k];
    a[0] = 1;
    forsn(i, 1, k)
    {
        if (a[i - 1] + i <= n - k + i + 1)
        {
            a[i] = a[i - 1] + i;
        }
        else
        {
            a[i] = a[i - 1] + 1;
        }
    }
    forn(i, k)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}