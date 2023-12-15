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

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */
int inv(vector<int> a, int i, int n)
{
    int ans = 0;
    if (i != -1)
    {
        a[i] = 1 - a[i];
    }
    vector<int> b(n);
    if (a[i] == 0)
    {
        b[i] = 0;
    }
    forsn(i, 1, n)
    {
        b[i] = 1 - a[i] + b[i - 1];
    }
    forn(i, n)
    {
        if (a[i] == 1)
        {
            ans += b[n - 1] - b[i];
        }
    }
    return ans;
}
void solv()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n, 0), c(n);
    forn(i, n)
    {
        cin >> a[i];
    }
    int ind1 = n - 1, ind2 = 0;
    forn(i, n)
    {
        if (a[i] == 0)
        {
            ind1 = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            ind2 = i;
            break;
        }
    }
    int t1 = inv(a, -1, n);
    int t2 = inv(a, ind1, n);
    int t3 = inv(a, ind2, n);
    cout << max(t1, max(t2, t3)) << endl;
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