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
    vector<int> a(n), coi(10, 0), coc(10, 0);
    forn(i, n)
    {
        int x;
        cin >> x;
        coi[x - 1]++;
    }
    int mic = -1;
    forn(_, 2)
    {
        cout << "- 0" << endl;
        cout << flush;
        forn(i, n)
        {
            int x;
            cin >> x;
            a[i] = x;
            coc[x - 1]++;
        }
        forn(i, 10)
        {
            if (coc[i] != coi[i])
            {
                mic = i;
            }
        }
    }
    vector<int> inds;
    forn(i, n)
    {
        if (a[i] != mic)
        {
            inds.push_back(i + 1);
        }
    }
    string s = "- ";
    s += to_string(sz(inds));
    s += " ";
    for (auto x : inds)
    {
        s += to_string(x);
        s += " ";
    }
    cout << s << endl;
    cout << flush;
    vector<int> b(n - sz(inds));
    forn(_, 1)
    {
        forn(i, n - sz(inds))
        {
            cin >> b[i];
        }
        cout << "- 0" << endl;
        cout << flush;
    }
    forn(i, n - sz(inds))
    {
        cin >> b[i];
    }
    forn(i, sz(b))
    {
        if (b[i] != mic)
        {
            cout << "! " << i + 1 << endl;
            cout << flush;
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}