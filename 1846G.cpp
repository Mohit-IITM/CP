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
int modInverse(int A, int M)
{
    int m0 = M;
    int y = 0, x = 1;
    if (M == 1)
        return 0;
    while (A > 1)
    {
        int q = A / M;
        int t = M;
        M = A % M, A = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
    {
        x += m0;
    }
    return x;
}
vector<bool> sieve(int n)
{
    // Time Complexity:- O(log(log(n)))
    vector<bool> is_prime(n + 1, 1);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && 1LL * i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
    return is_prime;
}

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

int val(string s)
{
    int ans = 0, mult = 1;
    reverse(all(s));
    forn(i, sz(s))
    {
        ans += mult * (s[i] - '0');
        mult *= 2;
    }
    return ans;
}
void solv()
{
    int n, l;
    cin >> l >> n;
    vector<int> da(n), se(n), cu(n);
    vector<pair<int, int>> so(n);
    string s;
    cin >> s;
    int ab = val(s);
    forn(i, n)
    {
        cin >> da[i];
        string s1, s2;
        cin >> s1 >> s2;
        se[i] = val(s2);
        cu[i] = val(s1);
    }
    forn(i, n)
    {
        so[i].first = se[i];
        so[i].second = cu[i];
    }
    sort(all(so), greater<pair<int, int>>());
    if (so.back().first != 0)
    {
        cout << -1 << endl;
        return;
    }
    forn(i, n)
    {
        se[i] = so[i].first;
        cu[i] = so[i].second;
    }
    vector<vector<int>> dp(n, vector<int>(pow(2, l), LONG_LONG_MAX));
    forn(i, n)
    {
        int ind = (((ab | cu[i]) ^ cu[i]) | se[i]);
        // cout << ind << endl;
        dp[i][ind] = min(dp[i][ind], da[i]);
        forn(j, sz(dp[i]))
        {
            if (i > 0)
            {
                dp[i][j] = min(dp[i - 1][j], dp[i][j]);
                if (dp[i - 1][j] != LONG_LONG_MAX)
                {
                    int ind1 = (((j | cu[i]) ^ cu[i]) | se[i]);
                    // cout << ind1 << " ";
                    dp[i][ind1] = min(dp[i][ind1], dp[i - 1][j] + da[i]);
                }
            }
        }
        // cout << endl;
    }
    int mi = LONG_LONG_MAX;
    forn(i, n)
    {
        mi = min(dp[i][0], mi);
    }
    cout << mi << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}