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
int modInverse(int A, int M)
{
    int m0 = M;
    int y = 0, x = 1;
    if (M == 1)
        return 0;
    while (A > 1)
    {
        int q = A / M;
        int t = M;
        M = A % M, A = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;
    return x;
}

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    set<int> sa, sb;
    map<int, int> ma, mb;
    forn(i, n)
    {
        cin >> a[i];
        ma[a[i]] = 1;
    }
    forn(i, n)
    {
        cin >> b[i];
        mb[b[i]] = 1;
    }

    int te = 1;
    forn(i, n - 1)
    {
        if (a[i] == a[i + 1])
        {
            te++;
            ma[a[i]] = max(ma[a[i]], te);
        }
        else
        {
            te = 1;
        }
    }
    te = 1;
    forn(i, n - 1)
    {
        if (b[i] == b[i + 1])
        {
            te++;
            mb[b[i]] = max(mb[b[i]], te);
        }
        else
        {
            te = 1;
        }
    }
    map<int, int> m;
    for (auto x : ma)
    {
        m[x.first] = x.second + mb[x.first];
    }
    for (auto x : mb)
    {
        m[x.first] = x.second + ma[x.first];
    }
    int ma1 = 0;
    for (auto x : m)
    {
        // cout << x.first << " " << x.second << endl;
        ma1 = max(ma1, x.second);
    }
    cout << ma1 << endl;
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