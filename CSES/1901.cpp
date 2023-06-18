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
    int n, m;
    cin >> n >> m;
    int a[n];
    bool vis[n];
    forn(i, n)
    {
        cin >> a[i];
        vis[i] = true;
    }
    sort(a, a + n);
    forn(i, m)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (a[mid] > x)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (l == 0)
        {
            if (a[l] == x and vis[l])
            {
                cout << a[l] << endl;
                vis[l] = false;
            }
        }
        if (a[l] == x and vis[l])
        {
            cout << a[l] << endl;
            vis[l] = false;
        }
        else if (vis[l - 1])
        {
            cout << a[l - 1] << endl;
            vis[l - 1] = false;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; // cin>>t;
    while (t--)
    {
        solv();
    }
}