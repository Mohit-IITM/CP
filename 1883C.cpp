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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    forn(i, n)
    {
        cin >> a[i];
    }
    int ans = 100;
    vector<int> probs(6);
    forn(i, 6)
    {
        probs[i] = (i + 1) * k;
    }
    forn(i, n)
    {
        forn(j, 6)
        {
            if (a[i] <= probs[j])
            {
                ans = min(probs[j] - a[i], ans);
            }
        }
    }
    int ans1 = 100;
    if (k == 4)
    {
        int eve = 0;
        forn(i, n)
        {
            if (a[i] % 2 == 0)
            {
                eve++;
            }
        }
        if (eve > 1)
        {
            ans1 = 0;
        }
        else if (eve == 1)
        {
            if (n > 1)
            {
                ans1 = 1;
            }
        }
        else if (eve == 0)
        {
            if (n > 1)
            {
                ans1 = 2;
            }
        }
    }
    cout << min(ans, ans1) << endl;
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