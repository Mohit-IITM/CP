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
    int p[2 * n];
    int ans = 0, ans1 = 0;
    forn(i, 2 * n)
    {
        cin >> p[i];
        ans += abs(p[i]);
    }
    sort(p, p + 2 * n);
    if (n == 1)
    {
        cout << abs(p[0] - p[1]) << endl;
        return;
    }
    if (n % 2 == 0)
    {
        forn(i, 2 * n - 1)
        {
            ans1 += abs(p[i] + 1);
        }
        ans1 += abs(p[2 * n - 1] - n);
        if (n == 2)
        {
            int ans2 = 0;
            forn(i, 2 * n)
            {
                ans2 += abs(p[i] - 2);
            }
            cout << min(min(ans, ans1), ans2) << endl;
        }
        else
        {
            cout << min(ans, ans1) << endl;
        }
    }
    else
    {
        cout << ans << endl;
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