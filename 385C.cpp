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
                is_prime[j] = 0;
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
    vector<int> v(n);
    int ma = 0;
    forn(i, n)
    {
        cin >> v[i];
        ma = max(ma, v[i]);
    }
    int N = 10000001;
    vector<int> lp(N, 0);
    for (int i = 2; i < N; i++)
    {
        if (lp[i] == 0)
        {
            for (int j = i; j < N; j += i)
                lp[j] = i;
        }
    }
    vector<int> ans(N, 0);
    forn(i, n)
    {
        int x = v[i];
        while (x > 1)
        {
            int f = lp[x];
            ans[f]++;
            while (x % f == 0)
            {
                x /= f;
            }
        }
    }
    forsn(i, 1, N)
    {
        ans[i] += ans[i - 1];
    }
    int m;
    cin >> m;
    forn(i, m)
    {
        int l, r;
        cin >> l >> r;
        if (r > N - 1)
        {
            r = N - 1;
        }
        if (l > N - 1)
        {
            l = N - 1;
        }
        cout << ans[r] - ans[l - 1] << endl;
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; // cin>>t;
    while (t--)
    {
        solv();
    }
}