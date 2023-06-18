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
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    string s;
    cin >> s;
    forn(i, n / 2)
    {
        int val = abs(s[i] - s[n - i - 1]);
        a[i] = min(val, 26 - val);
    }
    int ans = 0, l = 0, r = 0;
    forn(i, n)
    {
        if (a[i] != 0)
        {
            if (l == 0)
            {
                l = i + 1;
            }
            r = i + 1;
        }
        ans += a[i];
        // cout << a[i] << " ";
    }
    cout << endl;
    if (ans != 0)
    {
        ans += r - l + min(min(abs(l - k), abs(r - k)), min(abs(n + 1 - l - k), abs(n + 1 - r - k)));
    }
    // cout << r << " " << l << endl;
    cout << ans << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solv();
    }
}