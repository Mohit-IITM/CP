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
    vector<int> a(n), p(n);
    map<int, int> mp;
    forn(i, n)
    {
        cin >> a[i];
    }
    p[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = a[i] + p[i - 1];
    }
    int ma = 0, ans = 0;
    bool flag = false;
    forn(i, n)
    {
        if (a[i] == 0)
        {
            flag = true;
            ans += ma;
            map<int, int> mp1;
            mp = mp1;
            mp[p[i]]++;
            ma = 1;
        }
        else if (flag)
        {
            mp[p[i]]++;
            ma = max(ma, mp[p[i]]);
        }
        else if (p[i] == 0)
        {
            ans++;
        }
    }
    if (flag)
    {
        ans += ma;
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