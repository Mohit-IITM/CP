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
    int l = 0, r = n - 1;
    int min = 1, ma = n;
    while (n--)
    {
        if (a[l] == min)
        {
            l++;
            min++;
        }
        else if (a[r] == min)
        {
            r--;
            min++;
        }
        if (a[l] == ma)
        {
            l++;
            ma--;
        }
        else if (a[r] == ma)
        {
            r--;
            ma--;
        }
    }
    if (l >= r)
    {
        cout << -1 << endl;
        return;
    }
    cout << l + 1 << " " << r + 1 << endl;
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