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
    int su = 0;
    bool poss = true;
    set<int> po2;
    int el = 1;
    po2.insert(0);
    forn(i, 35)
    {
        po2.insert(el);
        el *= 2;
    }
    forn(i, n)
    {
        cin >> a[i];
        su += a[i];
    }
    if (su % n)
    {
        poss = false;
    }
    int avg = su / n;
    int le = 0, mo = 0;
    vector<int> plus(34, 0), minus(34, 0);
    forn(i, n)
    {
        int val = abs(a[i] - avg);
        if (a[i] < avg)
        {
            le++;
        }
        else if (a[i] > avg)
        {
            mo++;
        }
        // cout << val << " ";
        if (po2.find(val) == po2.end())
        {
            poss = false;
        }
        if (a[i] > avg)
        {
            plus[log2(val)]++;
        }
        else if (a[i] < avg)
        {
            minus[log2(val)]++;
        }
    }
    // cout << endl;
    if (poss)
    {
        forn(i, 34)
        {
            plus[i] -= minus[i];
            cout << plus[i] << " ";
        }
        cout << endl;
        for (int i = 33; i > 0; i--)
        {
            if (plus[i] > 0)
            {
                plus[i - 1] += 2 * plus[i];
                plus[i] = 0;
            }
        }
        forn(i, 34)
        {
            if (plus[i] != 0)
            {
                poss = false;
            }
        }
        // cout << endl;
        if (poss)
        {
            ya;
        }
        else
        {
            na;
        }
    }
    else
    {
        na;
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