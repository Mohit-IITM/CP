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
        // q is quotient
        int q = A / M;
        int t = M;

        // m is remainder now, process same as
        // Euclid's algo
        M = A % M, A = t;
        t = y;

        // Update y and x
        y = x - q * y;
        x = t;
    }

    // Make x positive
    if (x < 0)
        x += m0;

    return x;
}
/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    set<int> s;
    forn(i, n)
    {
        int x;
        cin >> x;
        mp[x]++;
        s.insert(x);
    }
    vector<int> v;
    for (auto x : s)
    {
        v.push_back(x);
    }
    int ans = 0;
    vector<int> prod;
    prod.push_back(1);
    forn(i, v.size())
    {
        prod.push_back((prod.back() * mp[v[i]]) % mod);
    }
    forn(i, v.size() - m + 1)
    {
        int temp = 0;
        if (v[i + m - 1] - v[i] < m)
        {
            temp = (prod[i + m] * modInverse(prod[i], mod)) % mod;
        }
        ans += temp;
        ans %= mod;
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