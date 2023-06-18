#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
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

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n, x;
    cin >> n >> x;
    map<int, int> m;
    string s = bitset<64>(n).to_string();
    if (x == n)
    {
        cout << n << endl;
        return;
    }
    for (int i = 0; i < 64; i++)
    {
        if (s[i] == '0')
        {
            int ans = 0;
            for (int j = i + 1; j < 64; j++)
            {
                if (s[j] == '1')
                {
                    ans += pow(2, 63 - j);
                }
            }
            m[63 - i] = n - (ans);
        }
    }
    bool f = 0;
    // for (auto y : m)
    // {
    //     cout << y.first << ' ' << y.second << endl;
    // }
    for (auto y : m)
    {
        if (y.second == x)
        {
            int ans = 0;
            for (int j = 64 - y.first; j < 64; j++)
            {
                if (s[j] == '1')
                {
                    s[j] = '0';
                }
            }
            f = 1;
            cout << bitset<64>(s).to_ullong() + (int)(pow(2, y.first)) << endl;
            return;
        }
    }
    if (!f)
    {
        cout << -1 << endl;
        return;
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}