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

void solv()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int ans = 0, n1 = 0, n0 = 0;
    vector<vector<int>> a(n, vector<int>(n));
    forn(i, n)
    {
        forn(j, n)
        {
            cin >> a[i][j];
        }
    }
    forn(i, n)
    {
        forn(j, n)
        {
            if (a[i][j] == 1)
            {
                n1++;
            }
            else
            {
                n0++;
            }
            if (a[i][j] != a[n - 1 - i][n - 1 - j])
            {
                ans++;
            }
        }
    }
    if (k >= ans / 2 and k % 2 == (ans / 2) % 2)
    {
        ya;
        return;
    }
    else if (k < ans / 2)
    {
        na;
        return;
    }
    if (n % 2 == 1)
    {
        ya;
        return;
    }
    if (k >= n1 and k % 2 == n1 % 2)
    {
        ya;
        return;
    }
    if (k >= n0 and k % 2 == n0 % 2)
    {
        ya;
        return;
    }
    na;
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