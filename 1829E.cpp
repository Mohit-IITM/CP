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

void dfs(map<pair<int, int>, bool> &marked, map<pair<int, int>, vector<pair<int, int>>> &field, pair<int, int> node, int &vol, vector<vector<int>> a)
{
    if (!marked[node])
    {
        marked[node] = true;
        vol += a[node.first][node.second];
        for (auto x : field[node])
        {
            if (!marked[x])
            {
                dfs(marked, field, x, vol, a);
            }
        }
    }
}

void solv()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    map<pair<int, int>, vector<pair<int, int>>> field;
    map<pair<int, int>, bool> marked;
    forn(i, n)
    {
        forn(j, m)
        {
            cin >> a[i][j];
        }
    }
    forn(i, n)
    {
        forn(j, m)
        {

            if (a[i][j] != 0)
            {
                marked[{i, j}] = false;
                if (i != 0)
                {
                    if (a[i - 1][j] != 0)
                    {
                        field[{i, j}].push_back({i - 1, j});
                    }
                }
                if (j != 0)
                {
                    if (a[i][j - 1] != 0)
                    {
                        field[{i, j}].push_back({i, j - 1});
                        // field[{i, j - 1}].push_back({i, j});
                    }
                }
                if (i != n - 1)
                {
                    if (a[i + 1][j] != 0)
                    {
                        field[{i, j}].push_back({i + 1, j});
                        // field[{i + 1, j}].push_back({i, j});
                    }
                }
                if (j != m - 1)
                {
                    if (a[i][j + 1] != 0)
                    {
                        field[{i, j}].push_back({i, j + 1});
                        // field[{i, j + 1}].push_back({i, j});
                    }
                }
            }
        }
    }
    int vol = 0, mavol = 0;
    for (auto node : marked)
    {
        dfs(marked, field, node.first, vol, a);
        mavol = max(vol, mavol);
        vol = 0;
    }
    cout << mavol << endl;
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