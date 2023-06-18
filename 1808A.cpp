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
    int l, r;
    cin >> l >> r;
    int a[200];
    for (int i = l; i <= r; i++)
    {
        vector<int> v;
        int x = i;
        while (x > 0)
        {
            v.push_back(x % 10);
            x /= 10;
        }
        sort(v.begin(), v.end());
        a[i - l] = v[v.size() - 1] - v[0];
        if (a[i - l] == 9)
        {
            cout << i << endl;
            return;
        }
    }
    int ma = INT_MIN, ind;
    for (int i = 0; i < r - l + 1; i++)
    {
        if (a[i] > ma)
        {
            ma = a[i];
            ind = i;
        }
    }
    cout << ind + l << endl;
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