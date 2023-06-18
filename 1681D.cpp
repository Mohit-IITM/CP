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
int max_digit(int x)
{
    int ans = 0;
    while (x)
    {
        ans = max(ans, x % 10);
        x /= 10;
    }
    return ans;
}
void solv()
{
    int n, x;
    cin >> n >> x;
    if (x == 1)
    {
        cout << -1 << endl;
        return;
    }
    int ans = 0, dem = pow(10, n - 1);
    while (x / dem == 0)
    {
        x = x * max_digit(x);
        ans++;
        cout << x << endl;
    }
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