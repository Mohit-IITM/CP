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
    int in = 2, ind = 2;
    forn(i, n)
    {
        cin >> a[i];
        if (a[i] == in)
        {
            in++;
        }
    }
    b[0] = 1;
    int zer = 0;
    int x = a[0], k = 1;
    forsn(i, 1, n)
    {
        if (x / ind > 1)
        {
            b[i] = k + max(zer, in - k);
            k++;
            ind++;
            x = x * a[i] / ind;
        }
        else
        {
            ind = 1;
            k = 1;
            x = a[i];
            if (in == 2)
            {
                b[i] = 1;
            }
            else if (a[i] < in)
            {
                b[i] = a[i] - 1;
            }
            else
            {
                b[i] = in - 1;
            }
        }
    }
    forn(i, n)
    {
        cout << b[i] << " ";
    }
    cout << endl;
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