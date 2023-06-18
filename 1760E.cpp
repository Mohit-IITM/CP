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
int_fast32_t calc(int d[], int n)
{
    int n1 = 0, ans = 0;
    forn(i, n)
    {
        if (d[i] == 0)
        {
            ans += n1;
        }
        if (d[i] == 1)
        {
            n1++;
        }
    }
    return ans;
}
void solv()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    forn(i, n)
    {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }
    forn(i, n)
    {
        if (a[i] == 0)
        {
            c[i] = 1;
            break;
        }
    }
    rforn(i, n - 1)
    {
        if (a[i] == 1)
        {
            b[i] = 0;
            break;
        }
    }
    // forn(i, n)
    // {
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    // forn(i, n)
    // {
    //     cout << c[i] << " ";
    // }
    // cout << endl;
    // cout << calc(c, n) << " " << calc(b, n) << endl;
    cout << max(calc(c, n), calc(b, n)) << endl;
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