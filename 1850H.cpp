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

void dfs(vector<vector<pair<int, int>>> &fild, vector<bool> &vis, vector<int> &coord, int node, bool &flag)
{
    for (auto x : fild[node])
    {
        if (!vis[x.first])
        {
            vis[x.first] = true;
            coord[x.first] = coord[node] + x.second;
            dfs(fild, vis, coord, x.first, flag);
        }
        else
        {
            if (coord[x.first] != coord[node] + x.second)
            {
                flag = false;
                return;
            }
        }
    }
}
void solv()
{
    int n, m;
    cin >> n >> m;
    bool c1 = true;
    vector<vector<pair<int, int>>> fild(n);
    forn(i, m)
    {
        int x, y, v;
        cin >> x >> y >> v;
        x--;
        y--;
        fild[x].push_back({y, v});
        fild[y].push_back({x, -v});
    }
    vector<bool> vis(n, false);
    vector<int> coord(n);
    forn(i, n)
    {
        if (!vis[i])
        {
            vis[i] = true;
            coord[i] = 0;
            dfs(fild, vis, coord, i, c1);
        }
    }
    if (c1)
    {
        ya;
    }
    else
    {
        na;
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