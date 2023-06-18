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

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */
int smallestDivisor(int n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;

    // iterate from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }

    return n;
}
void solv()
{
    int n, m;
    cin >> n >> m;
    if (n == 1)
    {
        ya;
        return;
    }
    if (m >= n)
    {
        na;
        return;
    }
    else
    {
        if (smallestDivisor(n) <= m)
        {
            na;
            return;
        }
        else
        {
            ya;
            return;
        }
    }
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