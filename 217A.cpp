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

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */
void dfs(map<int, vector<pair<int, int>>> &fieldx, map<int, vector<pair<int, int>>> &fieldy, map<pair<int, int>, bool> &mark, int &un, pair<int, int> node)
{
    if (!mark[node])
    {
        un++;
    }
    mark[node] = true;
    for (auto x : fieldx[node.first])
    {
        if (!mark[x])
        {
            dfs(fieldx, fieldy, mark, un, x);
        }
    }
    for (auto x : fieldy[node.second])
    {
        if (!mark[x])
        {
            dfs(fieldx, fieldy, mark, un, x);
        }
    }
}
void solv()
{
    int n;
    cin >> n;
    map<int, vector<pair<int, int>>> fieldx, fieldy;
    map<pair<int, int>, bool> mark;
    int un = 0;
    forn(i, n)
    {
        int x, y;
        cin >> x >> y;
        fieldx[x].push_back({x, y});
        fieldy[y].push_back({x, y});
        mark[{x, y}] = false;
    }
    int unc = 0;
    for (auto x : mark)
    {
        dfs(fieldx, fieldy, mark, un, x.first);
        if (un != 0)
        {
            unc++;
        }
        un = 0;
    }
    cout << unc - 1 << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; // cin>>t;
    while (t--)
    {
        solv();
    }
}