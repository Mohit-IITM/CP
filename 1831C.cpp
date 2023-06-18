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
void dfs(vector<vector<int>> &gph, map<pair<int, int>, int> &ind, vector<int> &fin, vector<int> &frc, vector<bool> &marked, int node)
{
    marked[node] = true;
    for (auto x : gph[node])
    {
        if (!marked[x])
        {
            marked[x] = true;
            pair<int, int> p1;
            p1.first = node;
            p1.second = x;
            if (ind[p1] < fin[node])
            {
                frc[x] = min(frc[x], frc[node] + 1);
                fin[x] = min(fin[x], ind[p1]);
            }
            else
            {
                frc[x] = min(frc[x], frc[node]);
                fin[x] = min(fin[x], ind[p1]);
            }
            dfs(gph, ind, fin, frc, marked, x);
        }
    }
}
void solv()
{
    int n;
    cin >> n;
    vector<int> fin(n, n), frc(n, n);
    map<pair<int, int>, int> ind;
    vector<bool> marked(n, false);
    vector<vector<int>> gph(n);
    forn(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        pair<int, int> p, p1;
        p.first = a;
        p.second = b;
        p1.first = b;
        p1.second = a;
        ind[p] = i;
        ind[p1] = i;
        if (p.first == 0 || p.second == 0)
        {
            fin[0] = min(fin[0], i);
        }
        gph[p.first].push_back(p.second);
        gph[p.second].push_back(p.first);
    }
    int ans = 0;
    frc[0] = 1;
    dfs(gph, ind, fin, frc, marked, 0);
    forn(i, n)
    {
        // cout << frc[i] << " ";
        ans = max(ans, frc[i]);
    }
    // cout << endl;
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