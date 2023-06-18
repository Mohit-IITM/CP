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
                is_prime[j] = 0;
        }
    }
    return is_prime;
}
/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int x, y;
    cin >> x >> y;
    int a = abs(x - y);
    // if (__gcd(x, y) != 1)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    if (a == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        int ans = min(x, y);
        vector<int> diffs;
        forn(i, sz(prime))
        {
            if (prime[i] > a)
            {
                break;
            }
            if (a % prime[i] == 0)
            {
                while (a % prime[i] == 0)
                {
                    a /= prime[i];
                }
                if (ans % prime[i] == 0)
                {
                    diffs.push_back(0);
                }
                else
                {
                    diffs.push_back(((ans / prime[i]) + 1) * prime[i] - ans);
                }
            }
        }
        if (a != 1)
        {
            if (ans % a == 0)
            {
                diffs.push_back(0);
            }
            else
            {
                diffs.push_back(((ans / a) + 1) * a - ans);
            }
        }
        int mi = 100000000;
        forn(i, sz(diffs))
        {
            if (diffs[i] < mi)
            {
                mi = diffs[i];
            }
        }
        cout << mi << endl;
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