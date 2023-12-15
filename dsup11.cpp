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
struct DSU
{
    vector<int> par, size, mael, miel, exp;
    DSU(int n)
    {
        init(n + 1);
    }
    void init(int n)
    {
        par.resize(n);
        size.resize(n, 1);
        iota(par.begin(), par.end(), 0);
        exp.resize(n, 0);
        mael = par;
        miel = par;
    }
    int find(int x)
    {
        int y = x;
        while (y != par[y])
        {
            y = par[y];
        }
        while (x != par[x])
        {
            int temp = par[x];
            par[x] = y;
            // miel[y] = min(miel[y], x);
            // mael[y] = max(mael[y], x);
            x = temp;
        }
        return x;
    }
    void debug()
    {
        for (auto x : exp)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    void gain(int x, int ex)
    {
        exp[find(x)] += ex;
    }
    int xp(int x)
    {
        return exp[x] + exp[find(x)];
    }
    void uni(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (x == y)
        {
            return;
        }
        if (size[x] > size[y])
        {
            swap(x, y);
        }
        par[x] = y;
        miel[y] = min(miel[x], miel[y]);
        mael[y] = max(mael[x], mael[y]);
        size[y] += size[x];
    }
    bool same(int x, int y)
    {
        return (find(x) == find(y));
    }
    int siz(int x)
    {
        return size[find(x)];
    }
    int ma(int x)
    {
        return mael[find(x)];
    }
    int mi(int x)
    {
        return miel[find(x)];
    }
};
void solv()
{
    int n, m;
    cin >> n >> m;
    DSU dsu(n);
    forn(i, m)
    {
        string s;
        cin >> s;
        if (s == "get")
        {
            int x;
            cin >> x;
            cout << dsu.xp(x) << endl;
        }
        else if (s == "add")
        {
            int x, y;
            cin >> x >> y;
            dsu.gain(x, y);
        }
        else
        {
            int x, y;
            cin >> x >> y;
            dsu.uni(x, y);
        }
    }
    dsu.debug();
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1; // cin>>t;
    while (t--)
    {
        solv();
    }
}