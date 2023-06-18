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
    int a[n], b[n];
    forn(i, n)
    {
        cin >> a[i];
    }
    forn(i, n)
    {
        cin >> b[i];
    }
    vector<int> en;
    int mis;
    en.push_back(0);
    forn(i, n)
    {
        if (a[i] != b[i])
        {
            mis = i + 1;
            break;
        }
    }
    forn(i, n - 1)
    {
        if (b[i] > b[i + 1])
        {
            en.push_back(i + 1);
        }
    }
    en.push_back(n);
    int ma = 0;
    forn(i, sz(en) - 1)
    {
        ma = max(ma, en[i + 1] - en[i]);
    }
    forn(i, sz(en) - 1)
    {
        if (en[i] + 1 <= mis and en[i + 1] >= mis)
        {
            cout << en[i] + 1 << " " << en[i + 1] << endl;
            return;
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