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
    int n;
    cin >> n;
    map<int, int> m;
    forn(i, n)
    {
        int x;
        cin >> x;
        m[x]++;
        m[x - 1] += 0;
        m[x + 1] += 0;
    }
    vector<int> v;
    for (auto i : m)
    {
        v.push_back(i.first * i.second);
    }
    int anso = 0, anse = 0;
    vector<int> dp(v.size());
    dp[0] = v[0];
    dp[1] = v[1];
    for (int i = 2; i < v.size(); i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + v[i]);
    }
    cout << dp[v.size() - 1] << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solv();
    }
}