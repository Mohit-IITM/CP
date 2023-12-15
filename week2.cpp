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
int MOD = 998244353;
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
vector<vector<int>> L;
vector<vector<bool>> W;
vector<bool> vis;
vector<int> meh0, inv, meh1;
void allpaths(int i)
{
    forn(j, sz(L[i]))
    {
        if (!vis[L[i][j]])
        {
            vis[L[i][j]] = true;
            allpaths(L[i][j]);
        }
        if (W[i][j])
        {
            meh1[i]++;
            // inv[i] += meh0[L[i][j]];
            inv[i] %= MOD;
        }
        else
        {
            meh0[i]++;
            inv[i] %= MOD;
        }
        inv[i] += inv[L[i][j]] + meh1[i] * meh0[L[i][j]];
        meh1[i] += meh1[L[i][j]];
        meh0[i] += meh0[L[i][j]];
        inv[i] %= MOD;
    }
}

void solv()
{
    int n;
    cin >> n;
    W.resize(n);
    L.resize(n);
    vis.resize(n, false);
    meh0.resize(n, 0);
    meh1.resize(n, 0);
    inv.resize(n, 0);
    forn(i, n)
    {
        int s;
        cin >> s;
        W[i].resize(s, false);
        forn(j, s)
        {
            int x, y;
            cin >> x >> y;
            x--;
            L[i].push_back(x);
            if (y == 1)
            {
                W[i][j] = true;
            }
        }
    }
    // for (auto x : L)
    // {
    //     for (auto y : x)
    //     {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }
    vis[0] = true;
    allpaths(0);
    cout << inv[0] << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solv();
    }
}