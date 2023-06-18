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
void dfs(vector<vector<int>> &dan, int node, int &cys, vector<bool> &marked)
{
    if (!marked[node])
    {
        cys++;
    }
    marked[node] = true;
    for (auto x : dan[node])
    {
        if (!marked[x])
        {
            dfs(dan, x, cys, marked);
        }
    }
}
void solv()
{
    int n, sel = 0;
    cin >> n;
    vector<vector<int>> dan(n);
    vector<bool> mar(n, false);
    map<int, int> m;
    forn(i, n)
    {
        int x;
        cin >> x;
        x--;
        if (sz(dan[x]) != 0)
        {
            bool c1 = true;
            for (auto y : dan[x])
            {
                if (y == i)
                {
                    c1 = false;
                }
            }
            if (c1)
            {
                dan[x].push_back(i);
                dan[i].push_back(x);
            }
        }
        else
        {
            dan[x].push_back(i);
            dan[i].push_back(x);
        }
    }
    int cy = 0;
    int cys = 0, seg = 0;
    forn(i, n)
    {
        dfs(dan, i, cy, mar);
        if (cy != 0)
        {
            cys++;
        }
        cy = 0;
        if (sz(dan[i]) == 1)
        {
            seg++;
        }
    }
    seg /= 2;
    if (seg == 0)
    {
        cout << cys << " " << cys << endl;
    }
    else
    {
        cout << cys - seg + 1 << " " << cys << endl;
    }
    // cout << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}