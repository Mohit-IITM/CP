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

void solv()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n + 1), f(n + 1);
    a[0] = 0;
    f[0] = 0;
    vector<int> pt(n + 1);
    pt[0] = 0;
    pt[1] = 1;
    forsn(i, 2, n + 1)
    {
        pt[i] = 2 * pt[i - 1] % mod;
    }
    forn(i, n)
    {
        if (s[i] == '4')
        {
            f[i + 1] = f[i] + 1;
        }
        else
        {
            f[i + 1] = f[i];
        }
        if (s[i] == '*')
        {
            a[i + 1] = a[i] + 1;
        }
        else
        {
            a[i + 1] = a[i];
        }
    }
    int ans = 0;
    forn(i, n)
    {
        if (s[i] == '0')
        {
            int beff = (a[i] + 1) * f[i] + a[i] * pt[a[i]];
            int aff = (a[n] - a[i + 1] + 1) * (f[n] - f[i + 1]) + (a[n] - a[i + 1]) * pt[a[n] - a[i + 1]];
            beff %= mod;
            aff %= mod;
            ans += aff * beff;
            ans %= mod;
        }
        else if (s[i] == '*')
        {
            int beff = (a[i] + 1) * f[i] + a[i] * pt[a[i]];
            int aff = (a[n] - a[i + 1] + 1) * (f[n] - f[i + 1]) + (a[n] - a[i + 1]) * pt[a[n] - a[i + 1]];
            beff %= mod;
            aff %= mod;
            ans += aff * beff;
            ans %= mod;
        }
    }
    cout << ans << endl;
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