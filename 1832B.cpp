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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int sum = 0;
    forn(i, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(all(v));
    int left = 0, right = n - 1;
    int mins1 = sum, mins2 = sum;
    vector<int> vpr(n + 1);
    vpr[0] = 0;
    forn(i, n)
    {
        vpr[i + 1] = vpr[i] + v[i];
    }
    forn(i, k)
    {
        int temp = 0;
        temp = sum - vpr[n - 1 - i] + vpr[2 * (k - 1 - i)];
        mins1 = min(mins1, temp);
        // cout << temp << endl;
    }
    forn(i, k)
    {
        int temp = 0;
        temp = vpr[2 * (i + 1)] + sum - vpr[n - (k - i) + 1];
        mins2 = min(mins2, temp);
    }
    cout << sum - min(mins1, mins2) << endl;
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