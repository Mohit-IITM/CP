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
    int n, m;
    cin >> n >> m;
    int k = sqrtl(n);
    bool flower = true;
    if (n != k * k || m != k * (k + 1))
    {
        flower = false;
    }
    vector<set<int>> adj(n);
    forn(i, m)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    int c2 = 0, c4 = 0;
    vector<int> fours;
    forn(i, n)
    {
        if (sz(adj[i]) == 2)
        {
            c2++;
        }
        else if (sz(adj[i]) == 4)
        {
            fours.push_back(i);
            c4++;
        }
    }
    // cout << c2 << " " << c4 << endl;
    if (c2 != k * (k - 1) || c4 != k)
    {
        flower = false;
        na;
        return;
    }
    vector<int> vis1(n, false);
    vis1[0] = true;
    queue<int> bfs;
    bfs.push(0);
    while (!bfs.empty())
    {
        int node = bfs.front();
        bfs.pop();
        for (auto x : adj[node])
        {
            if (!vis1[x])
            {
                vis1[x] = true;
                bfs.push(x);
            }
        }
    }
    for (auto x : vis1)
    {
        flower &= x;
    }
    if (!flower)
    {
        na;
        return;
    }
    for (auto x : fours)
    {
        for (auto y : adj[x])
        {
            adj[y].erase(x);
        }
        adj[x].clear();
    }
    vector<int> vis(n, 0);
    map<int, int> cys;
    forn(i, n)
    {
        if (!vis[i])
        {
            vis[i] = true;
            queue<int> bfs1;
            int cy = 0;
            bfs1.push(i);
            while (!bfs1.empty())
            {
                int node = bfs1.front();
                cy++;
                bfs1.pop();
                for (auto x : adj[node])
                {
                    if (!vis[x])
                    {
                        vis[x] = true;
                        bfs1.push(x);
                    }
                }
            }
            cys[cy]++;
        }
    }
    // for (auto x : cys)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    if (cys[k - 1] != k)
    {
        flower = false;
    }
    if (flower)
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