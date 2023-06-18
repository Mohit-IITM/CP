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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    vector<int> ans;
    int ans1 = 0;
    ans.push_back(ans1);
    ans.push_back(ans1);
    forn(i, n - 2)
    {
        if (v[i] >= v[i + 1] && v[i + 1] >= v[i + 2])
        {
            ans1++;
        }
        ans.push_back(ans1);
    }
    forn(i, sz(ans))
    {
        // cout << ans[i] << " ";
    }
    cout << endl;
    forn(i, q)
    {
        int l, r;
        cin >> l >> r;
        if (r - l + 1 < 3)
        {
            cout << r - l + 1 << endl;
            continue;
        }
        cout << r + 1 - l - ans[r - 1] + ans[l] << endl;
    }
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