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
vector<int> prime;
/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    forn(i, n) { cin >> a[i]; }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int sq = 100000;
    vector<bool> is_prime(sq + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= sq; i++)
    {
        if (is_prime[i] && (long long)i * i <= sq)
        {
            for (int j = i * i; j <= sq; j += i)
                is_prime[j] = false;
        }
    }
    forn(i, sz(is_prime))
    {
        if (is_prime[i])
        {
            prime.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}