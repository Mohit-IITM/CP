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
    vector<int> a(n - 1), b(n - 1);
    forn(i, n - 1)
    {
        cin >> a[i];
    }
    b[0] = a[0];
    for (int i = 1; i < n - 1; i++)
    {
        b[i] = a[i] - a[i - 1];
    }
    map<int, int> mis;
    forn(i, n - 1)
    {
        mis[b[i]]++;
    }
    vector<int> miss;
    forn(i, n)
    {
        if (mis[i + 1] == 0)
        {
            miss.push_back(i + 1);
        }
    }
    if (sz(miss) == 1)
    {
        ya;
    }
    else if (sz(miss) > 2)
    {
        na;
    }
    else
    {
        int val = miss[0] + miss[1];
        if (val > n)
        {
            if (mis[val])
            {
                ya;
            }
            else
            {
                na;
            }
        }
        else
        {
            if (mis[val] == 2)
            {
                ya;
            }
            else
            {
                na;
            }
        }
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