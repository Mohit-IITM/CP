
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
vector<int> prime;
/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n;
    cin >> n;
    int a[n], b[n];
    forn(i, n)
    {
        cin >> a[i];
    }
    bool flag = false;
    forn(i, sz(prime))
    {
        int ans = 0;
        forn(j, n)
        {
            if (a[j] % prime[i] == 0)
            {
                while (a[j] % prime[i] == 0)
                {
                    a[j] = a[j] / prime[i];
                }
                ans++;
            }
            if (ans == 2)
            {
                ya;
                flag = true;
                return;
                break;
            }
        }
    }
    map<int, int> m;
    forn(i, n)
    {
        if (a[i] != 1)
        {
            m[a[i]]++;
            if (m[a[i]] == 2)
            {
                ya;
                flag = true;
                return;
            }
        }
    }
    if (!flag)
    {
        na;
        return;
    }
}
int32_t main()
{
    int t;
    cin >> t;
    int sq = sqrt(1e9);
    vector<bool> is_prime(sq + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= sq; i++)
    {
        if (is_prime[i] && (long long)i * i <= sq)
        {
            for (int j = i * i; j <= sq; j += i)
                is_prime[j] = false;
        }
    }
    forn(i, sz(is_prime))
    {
        if (is_prime[i])
        {
            prime.push_back(i);
        }
    }
    while (t--)
    {
        solv();
    }
}