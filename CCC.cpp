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
    int n, m;
    cin >> n >> m;
    int x, k;
    cin >> x >> k;
    vector<int> a(n + m), b(n + m);
    int ma = 0;
    forn(i, m + n)
    {
        cin >> b[i];
        ma = max(ma, b[i]);
    }
    if (n == 0 && m == 0)
    {
        cout << -1 << endl;
        return;
    }
    if (n == 0)
    {
        cout << "Shaun" << endl;
        return;
    }
    if (m == 0)
    {
        cout << "Chahel" << endl;
        return;
    }
    // cout << ma << endl;
    a[0] = x % k;
    for (int i = 1; i < (n + m); i++)
    {
        a[i] = a[i - 1] * x;
        a[i] %= k;
        // cout << a[i] << " ";
    }
    // cout << endl;
    forn(i, n + m)
    {
        a[i] += 1;
    }
    vector<bool> prime(ma + 2);
    prime = sieve(ma + 1);
    int shaun = m, chahel = n;
    bool s = false, c = false;
    forn(i, n + m)
    {
        int val = ((b[i] - 1) / a[i]) + 1;
        // cout << val << " ";
        if (prime[val])
        {
            shaun--;
        }
        else
        {
            chahel--;
        }
        if (chahel <= 0)
        {
            c = true;
            break;
        }
        else if (shaun <= 0)
        {
            s = true;
            break;
        }
    }
    // cout << endl;
    if (s)
    {
        cout << "Chahel" << endl;
    }
    else if (c)
    {
        cout << "Shaun" << endl;
    }
    else
    {
        if (shaun < chahel)
        {
            cout << "Chahel" << endl;
        }
        else if (chahel < shaun)
        {
            cout << "Shaun" << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
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