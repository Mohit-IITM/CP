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
vector<pair<int, int>> milist(vector<int> n, vector<int> m)
{
    vector<pair<int, int>> mi;
    forn(i, n.size())
    {
        mi.push_back({n[i] / m[i], i});
    }
    sort(all(mi));
    return mi;
}
void solv()
{
    string s;
    cin >> s;
    vector<int> n(3);
    forn(i, 3)
    {
        cin >> n[i];
    }
    vector<int> p(3);
    forn(i, 3)
    {
        cin >> p[i];
    }
    int r;
    cin >> r;
    vector<int> h(3);
    forn(i, sz(s))
    {
        if (s[i] == 'B')
        {
            h[0]++;
        }
        else if (s[i] == 'S')
        {
            h[1]++;
        }
        else
        {
            h[2]++;
        }
    }
    int ans = 0;
    vector<pair<int, int>> mi;
    vector<int> n1(3), h1(3), p1(3);
    mi = milist(n, h);
    forn(i, 3)
    {
        n1[i] = n[mi[i].second];
        h1[i] = h[mi[i].second];
        p1[i] = p[mi[i].second];
    }
    n = n1;
    h = h1;
    p = p1;
    forn(i, 3)
    {
        cout << n[i] << " ";
    }
    endl;
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