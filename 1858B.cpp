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
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> bench(m);
    forn(i, m)
    {
        cin >> bench[i];
    }
    int cookies = m;
    cookies += (bench[0]) / d;
    for (int i = 1; i < m; i++)
    {
        cookies += (bench[i] - bench[i - 1] - 1) / d;
    }
    cookies += (n - bench[m - 1]) / d;
    map<int, int> counts;
    int val = (bench[1] - bench[0]) / d + (bench[0]) / d - (bench[1]) / d;
    counts[cookies - val]++;
    for (int i = 1; i < m - 1; i++)
    {
        val = (bench[i + 1] - bench[i] - 1) / d + (bench[i] - bench[i - 1] - 1) / d - (bench[i + 1] - bench[i - 1] - 1) / d;
        counts[cookies - val]++;
    }
    val = (n - bench[m - 1]) / d + (bench[m - 1] - bench[m - 2]) / d - (n - bench[m - 2]) / d;
    counts[cookies - val]++;
    cout << cookies << endl;
    for (auto x : counts)
    {
        cout << x.first << " " << x.second << endl;
    }
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