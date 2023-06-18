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
    int a[n], an = 0;
    forn(i, n) { cin >> a[i]; }
    sort(a, a + n);
    int happy = 0, pg = 0;
    bool f1 = true;
    forn(i, n)
    {
        if (a[i] > i && f1)
        {
            happy++;
            f1 = false;
        }
        else if (a[i] <= i)
        {
            f1 = true;
        }
    }
    cout << happy + 1 << endl;
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