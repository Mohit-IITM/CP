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
    vector<int> v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    int ans = n;
    int ns = 0;
    bool c1 = false;
    forn(i, n - 1)
    {
        if (v[i] > v[i + 1])
        {
            c1 = true;
            break;
        }
        else if (v[i] < v[i + 1])
        {
            c1 = false;
            break;
        }
    }
    int c2 = 0;
    forn(i, n - 1)
    {
        if (v[i] > v[i + 1])
        {
            if (!c1)
            {
                c1 = true;
                ns++;
            }
        }
        else if (v[i] < v[i + 1])
        {
            if (c1)
            {
                c1 = false;
                ns++;
            }
        }
        c2 += abs(v[i] - v[i + 1]);
    }
    if (c2 == 0)
    {
        ns = 1;
    }
    else
    {
        ns += 2;
    }
    cout << ns << endl;
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