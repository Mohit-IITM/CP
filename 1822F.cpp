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

void dfs(vector<vector<int>> &adj, vector<int> &dir, int node, int par)
{
    for (auto x : adj[node])
    {
        if (x != par)
        {
            dir[x] = dir[node] + 1;
            dfs(adj, dir, x, node);
        }
    }
}
void solv()
{
    int n, c, k;
    cin >> n >> k >> c;
    vector<vector<int>> adj(n);
    vector<int> dist(n, 0), dist1(n, 0), dist2(n, 0);
    forn(i, n - 1)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(adj, dist, 0, -1);
    int ma = -1, l = -1;
    forn(i, n)
    {
        if (dist[i] > ma)
        {
            ma = dist[i];
            l = i;
        }
    }
    dfs(adj, dist1, l, -1);
    ma = -1;
    forn(i, n)
    {
        if (dist1[i] > ma)
        {
            ma = dist1[i];
            l = i;
        }
    }
    dfs(adj, dist2, l, -1);
    int ans = 0;
    forn(i, n)
    {
        ans = max(ans, k * (max(dist2[i], dist1[i])) - c * dist[i]);
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