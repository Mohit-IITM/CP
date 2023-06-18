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
    int n, x, y;
    cin >> n >> x >> y;
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> v;
    int cnt = 0;
    int ans = 0;
    forn(i, n)
    {
        if (s1[i] != s2[i])
        {
            cnt++;
            v.push_back(i);
        }
    }
    if (cnt == 2)
    {
        if (v[1] - v[0] == 1)
        {
            ans = min(x, 2 * y);
        }
        else
        {
            ans = min(x * (v[1] - v[0]), y);
        }
    }
    else if (cnt % 2 == 0)
    {
        for (int i = 0; i < cnt; i += 2)
        {
            ans += min(x * (v[i + 1] - v[i]), y);
        }
    }
    else
    {
        ans = -1;
    }
    cout << ans << endl;
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