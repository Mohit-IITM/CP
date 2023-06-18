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

// C++ program to find prime factorization of a
// number n in O(Log n) time with precomputation
// allowed.

#define MAXN 10000001

// stores smallest prime factor for every number
int spf[MAXN];

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)

        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;

    // separately marking spf for every even
    // number as 2
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i < MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j = i * i; j < MAXN; j += i)

                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> gf(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
void solv()
{

    int n;
    cin >> n;
    int a[n];
    forn(i, n)
    {
        cin >> a[i];
    }
    int ones = 0, twos = 0, left = 0;
    int ans = 0;
    map<int, int> mp;
    forn(i, n)
    {
        forn(j, sz(gf(a[i])))
        {
            mp[gf(a[i])[j]]++;
        }
    }
    for (auto x : mp)
    {
        ans += x.second / 2;
        mp[x.first] = x.second % 2;
    }
    for (auto x : mp)
    {
        if (x.second == 1)
        {
            left++;
        }
    }
    ans += left / 3;
    cout << ans << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}