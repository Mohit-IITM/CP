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
    int n;
    cin >> n;
    vector<set<int>> outs(n);
    vector<int> ins(n);
    vector<pair<int, int>> c(n);
    forn(i, n)
    {
        int x;
        cin >> x;
        x--;
        ins[i] = x;
        outs[x].insert(i);
    }
    forn(i, n)
    {
        cin >> c[i].first;
        c[i].second = i;
    }
    sort(all(c));
    vector<pair<int, int>> ord(n);
    vector<bool> vis(n, false);
    forn(i, n)
    {
        ord[i] = {sz(outs[i]), i};
    }
    sort(all(ord));
    // forn(i, n)
    // {
    //     cout << i + 1 << ": ";
    //     for (auto x : outs[i])
    //     {
    //         cout << x + 1 << " ";
    //     }
    //     cout << endl;
    // }
    forn(i, n)
    {
        int ind = ord[i].second;
        if (sz(outs[ind]) == 0)
        {
            vis[ind] = true;
            int par = ins[ind];
            outs[par].erase(ind);
            cout << ind + 1 << " ";
        }
    }
    // forn(i, n)
    // {
    //     cout << i + 1 << ": ";
    //     for (auto x : outs[i])
    //     {
    //         cout << x + 1 << " ";
    //     }
    //     cout << endl;
    // }
    sort(all(c));
    vector<vector<int>> cys;
    forn(i, n)
    {
        int ind = c[i].second;
        if (!vis[ind])
        {
            queue<int> bfs;
            vis[ind] = true;
            bfs.push(ind);
            vector<int> temp;
            while (!bfs.empty())
            {
                int node = bfs.front();
                bfs.pop();
                temp.push_back(node + 1);
                for (auto x : outs[node])
                {
                    if (!vis[x])
                    {
                        vis[x] = true;
                        bfs.push(x);
                    }
                }
            }
            cys.push_back(temp);
        }
    }
    for (auto &x : cys)
    {
        reverse(all(x));
        int off = 1, nt = sz(x);
        forn(i, nt)
        {
            cout << x[i] << " ";
        }
    }
    cout << endl;
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