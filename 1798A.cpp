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
    int a[n];
    int ma1 = 0, ma2 = 0;
    forn(i, n)
    {
        cin >> a[i];
        ma1 = max(ma1, a[i]);
    }
    int b[n];
    forn(i, n)
    {
        cin >> b[i];
        ma2 = max(ma2, b[i]);
    }
    forn(i, n)
    {
        if (a[i] > a[n - 1])
        {
            if (b[i] > a[n - 1])
            {
                cout << "No" << endl;
                return;
            }
            else
            {
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }
    }
    forn(i, n)
    {
        if (b[i] > b[n - 1])
        {
            if (a[i] > b[n - 1])
            {
                cout << "No" << endl;
                return;
            }
            else
            {
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }
    }
    forn(i, n)
    {
        if (a[i] > a[n - 1] or b[i] > b[n - 1])
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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