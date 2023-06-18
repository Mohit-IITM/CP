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
    int n1 = n;
    int al = 0, bo = 0;
    int i = 0;
    int alb = 0, bob = 0;
    while (true)
    {
        if (n1 < 8 * i + 1)
        {
            al += n1;
            alb += n1 / 2;
            break;
        }
        al += 8 * i + 1;
        alb += 4 * i;
        n1 -= 8 * i + 1;
        if (n1 < 8 * i + 5)
        {
            bo += n1;
            bob += (n1 + 1) / 2;
            break;
        }
        bo += 8 * i + 5;
        bob += 4 * i + 3;
        n1 -= 8 * i + 5;
        i++;
    }
    cout << al - alb << " " << alb << " " << bo - bob << " " << bob << endl;
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