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
    vector<int> a(n);
    forn(i, n)
    {
        cin >> a[i];
    }
    vector<vector<int>> dp(n, vector<int>(64, 0));
    dp[0][a[0]]++;
    forsn(i, 1, n)
    {
        dp[i] = dp[i - 1];
        dp[i][a[i]]++;
        forn(j, 64)
        {
            if (dp[i - 1][j])
            {
                dp[i][j & a[i]] += dp[i - 1][j];
            }
            dp[i][j] %= mod;
        }
    }
    vector<int> bits(64, 0);
    forn(i, 64)
    {
        int num = i;
        while (num > 0)
        {
            if (num % 2 == 1)
            {
                bits[i]++;
            }
            num /= 2;
        }
    }
    int ans = 0;
    forn(j, 64)
    {
        if (bits[j] == k)
        {
            ans += dp[n - 1][j];
            ans %= mod;
        }
    }
    cout << ans << endl;
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