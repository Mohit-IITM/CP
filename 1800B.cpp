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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<int, int> m;
    int burl = 0;
    forn(i, n)
    {
        m[s[i] + 0]++;
    }
    for (auto i : m)
    {
        if (i.first < 97)
        {
            int temp = min(m[i.first], m[i.first + 32]);
            m[i.first] -= temp;
            m[i.first + 32] -= temp;
            burl += temp;
        }
    }
    for (auto i : m)
    {
        if (k - i.second / 2 >= 0)
        {
            k -= i.second / 2;
            burl += i.second / 2;
        }
        else
        {
            burl += k;
            k = 0;
        }
    }
    cout << burl << endl;
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