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
    vector<int> a;
    vector<int> v;
    int ma = INT_MIN, mi = INT_MAX;
    bool c1 = true;
    forn(i, n)
    {
        int x;
        cin >> x;
        if (x != 0)
        {
            c1 = false;
        }
        a.push_back(x);
        ma = max(ma, x);
        mi = min(mi, x);
        // cout << ma << " " << mi << endl;
    }
    int di = ma - mi;
    // cout << di << endl;
    sort(a.begin(), a.end(), greater<int>());
    // forn(i, n)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    if (c1)
    {
        cout << "No" << endl;
        return;
    }
    int dif = ma;
    int ind = 0;
    v.push_back(a[ind]);
    ind++;
    forn(i, n - 1)
    {
        if (dif + a.back() < 0)
        {
            v.push_back(a[ind]);
            dif += a[ind];
            ind++;
        }
        else
        {
            v.push_back(a.back());
            dif += a.back();
            a.pop_back();
        }
    }
    cout << "Yes" << endl;
    forn(i, n)
    {
        cout << v[i] << " ";
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