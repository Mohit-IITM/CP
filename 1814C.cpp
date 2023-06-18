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
    int n, a, b;
    cin >> n >> a >> b;
    vector<pair<int, int>> v(n);
    forn(i, n)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(all(v), greater<pair<int, int>>());
    int t1 = min(a, b), t2 = max(a, b), t = 0;
    vector<int> a1, b1;
    forn(i, n)
    {
        if (t + t1 > t2)
        {
            b1.push_back(v[i].second);
            t -= t2;
        }
        else
        {
            a1.push_back(v[i].second);
            t += t1;
        }
    }
    if (b > a)
    {
        cout << a1.size() << " ";
        for (auto x : a1)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << b1.size() << " ";
        for (auto x : b1)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else
    {
        cout << b1.size() << " ";
        for (auto x : b1)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << a1.size() << " ";
        for (auto x : a1)
        {
            cout << x << " ";
        }
        cout << endl;
    }
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