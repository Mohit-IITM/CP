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
    {
        x += m0;
    }
    return x;
}
vector<bool> sieve(int n)
{
    // Time Complexity:- O(log(log(n)))
    vector<bool> is_prime(n + 1, 1);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && 1LL * i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
    return is_prime;
}

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> s;
    forn(i, n)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    if (sz(s) <= 3)
    {
        cout << 0 << endl;
        return;
    }
    vector<int> vals;
    for (auto x : s)
    {
        vals.push_back(x);
    }
    int n1 = sz(vals);
    int wt1 = 0, wt2, wt3 = 0;
    int i1 = 0, i3 = n1 - 1;
    vector<int> mas;
    while (i3 > i1 + 1)
    {
        wt1 = (vals[i1] - vals[0] + 1) / 2;
        wt2 = (vals[i3 - 1] - vals[i1 + 1] + 1) / 2;
        wt3 = (vals[n1 - 1] - vals[i3] + 1) / 2;
        mas.push_back(max(wt3, max(wt2, wt1)));
        if (((vals[i1 + 1] - vals[0] + 1) / 2) > (vals[n1 - 1] - vals[i3 - 1] + 1) / 2)
        {
            i3--;
        }
        else
        {
            i1++;
        }
        // cout << wt1 << " " << wt2 << " " << wt3 << endl;
    }
    int ans = LONG_LONG_MAX;
    for (auto x : mas)
    {
        ans = min(ans, x);
    }
    cout << ans << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}