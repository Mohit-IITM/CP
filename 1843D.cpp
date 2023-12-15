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
void dfs(int node, int parent, vector<vector<int>> &chu, vector<int> &sum)
{
    if (sz(chu[node]) == 1 && chu[node][0] == parent)
    {
        sum[node] = 1;
    }
    else
    {
        for (auto x : chu[node])
        {
            if (x != parent)
            {
                dfs(x, node, chu, sum);
                sum[node] += sum[x];
            }
        }
    }
}
void solv()
{
    int n;
    cin >> n;
    vector<vector<int>> chu(n);
    forn(i, n - 1)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        chu[x].push_back(y);
        chu[y].push_back(x);
    }
    vector<int> sum(n, 0);
    dfs(0, -1, chu, sum);
    int q;
    cin >> q;
    forn(i, q)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        cout << sum[x] * sum[y] << endl;
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