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
    vector<string> mat0(n);
    vector<vector<int>> l(n, vector<int>(n, 0)), mat(n, vector<int>(n)), r(n, vector<int>(n + 1, 0));
    forn(i, n)
    {
        cin >> mat0[i];
    }
    forn(i, n)
    {
        forn(j, n)
        {
            mat[i][j] = mat0[i][j] - '0';
        }
    }
    int ans = 0;
    forn(j, n)
    {
        if (mat[0][j])
        {
            ans++;
            int le = max(j - 1, 0LL), re = min(j + 2, n);
            l[0][le]++;
            r[0][re]++;
        }
    }
    for (int i = 1; i < n; i++)
    {
        bool inv = false;
        forn(j, n)
        {
            if (l[i - 1][j] % 2)
            {
                int le = max(j - 1, 0LL);
                l[i][le]++;
            }
            if (r[i - 1][j] % 2)
            {
                int re = min(j + 1, n);
                r[i][re]++;
            }
        }
        forn(j, n)
        {
            if ((l[i - 1][j] + r[i - 1][j]) % 2)
            {
                inv = !inv;
            }
            if (inv)
            {
                mat[i][j] ^= 1;
            }
        }
        forn(j, n)
        {
            if (mat[i][j])
            {
                ans++;
                int le = max(j - 1, 0LL), re = min(j + 2, n);
                l[i][le]++;
                r[i][re]++;
            }
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