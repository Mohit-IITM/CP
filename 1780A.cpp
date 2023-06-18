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
    vector<int> a(n);
    forn(i, n) { cin >> a[i]; }
    vector<int> even, odd;
    forn(i, n)
    {
        if (a[i] % 2 == 0)
        {
            even.push_back(i + 1);
        }
        else
        {
            odd.push_back(i + 1);
        }
    }
    if (sz(odd) == 0)
    {
        na;
        return;
    }
    else if (n == 3 and sz(even) == 1)
    {
        na;
        return;
    }
    else
    {
        ya;
        if (sz(even) > 1)
        {
            cout << even[0] << " " << even[1] << " " << odd[0] << endl;
        }
        else
        {
            cout << odd[0] << " " << odd[1] << " " << odd[2] << endl;
        }
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