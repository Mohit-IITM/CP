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

void solv()
{
    int m;
    cin >> m;
    vector<vector<int>> a;
    map<int, int> mp;
    forn(i, m)
    {
        int n;
        cin >> n;
        vector<int> temp;
        forn(j, n)
        {
            int x;
            cin >> x;
            temp.push_back(x);
            mp[x] = i;
        }
        a.push_back(temp);
    }
    vector<int> ans(m, -1);
    for (auto x : mp)
    {
        ans[x.second] = x.first;
    }
    forn(i, m)
    {
        if (ans[i] == -1)
        {
            cout << -1 << endl;
            return;
        }
    }
    forn(i, m)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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