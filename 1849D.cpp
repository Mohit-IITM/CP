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
    vector<bool> red(n, false);
    forn(i, n)
    {
        cin >> a[i];
    }
    vector<int> modf;
    int ind = 0, cur = -1;
    if (a[0] == 2)
    {
        a[0]--;
    }
    if (a[n - 1] == 2)
    {
        a[n - 1]--;
    }
    while (ind < n)
    {
        if (a[ind] == 0)
        {
            if (cur != -1)
            {
                modf.push_back(cur);
                cur = -1;
            }
            modf.push_back(0);
        }
        else
        {
            cur = max(cur, a[ind]);
        }
        ind++;
    }
    if (cur != -1)
    {
        modf.push_back(cur);
    }
    // for (auto x : modf)
    // {
    //     cout << x << " ";
    // }
    int ans = sz(modf);
    forn(i, sz(modf))
    {
        bool c1 = false;
        if (modf[i] == 0)
        {
            if (i != 0)
            {
                if (modf[i - 1] == 2)
                {
                    c1 = true;
                }
            }
            if (i != n - 1)
            {
                if (modf[i + 1] == 2)
                {
                    c1 = true;
                }
            }
            if (c1)
            {
                ans--;
            }
        }
    }
    cout << ans << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1; // cin>>t;
    while (t--)
    {
        solv();
    }
}