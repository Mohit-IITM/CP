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
    vector<vector<int>> out(n), in(n);
    forn(i, m)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        out[x].push_back(y);
        in[y].push_back(x);
    }
    queue<int> bfs;
    bfs.push(0);
    vector<bool> vis1(n, false), vis2(n, false);
    vis1[0] = true;
    vector<int> dist1(n, 1), dist2(n, 1);
    while (!bfs.empty())
    {
        int node = bfs.front();
        bfs.pop();
        for (auto x : out[node])
        {
            if (!vis1[x])
            {
                bfs.push(x);
                vis1[x] = true;
                dist1[x] = dist1[node] + 1;
            }
        }
    }
    int maind = 0, ma = 0;
    forn(i, n)
    {
        if (dist1[i] > ma)
        {
            ma = dist1[i];
            maind = i;
        }
        cout << dist1[i] << " ";
    }
    cout << endl;
    bfs.push(maind);
    vis2[maind] = true;
    // cout << maind << endl;
    while (!bfs.empty())
    {
        int node = bfs.front();
        bfs.pop();
        for (auto x : in[node])
        {
            if (!vis2[x])
            {
                bfs.push(x);
                vis2[x] = true;
                dist2[x] = dist2[node] + 1;
            }
        }
    }
    int ans = 0;
    for (auto x : dist2)
    {
        ans = max(ans, x);
        cout << x << " ";
    }
    cout << endl;
    cout << ans << endl;
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