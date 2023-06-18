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
    bool c1 = false, c2 = false;
    int a[n];
    int mi = INT_MAX, ind;
    map<int, int> m;
    forn(i, n)
    {
        cin >> a[i];
    }
    forn(i, n)
    {
        if (a[i] > 1)
        {
            c1 = true;
        }
        if (a[i] == 1)
        {
            c2 = true;
        }
        if (a[i] < mi)
        {
            mi = a[i];
            ind = i;
        }
        m[a[i]]++;
    }
    int ans = 0;
    if (c1 and c2)
    {
        cout << -1 << endl;
        return;
    }
    if (m.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        forn(i, n)
        {
            if (a[i] == mi)
            {
                continue;
            }
            else
            {
                int temp = a[i];
                while (temp > 2)
                {
                    temp = (temp - 1) / mi + 1;
                    ans++;
                }
            }
        }
        cout << ans << endl;
        vector<int> v;
        forn(i, n)
        {
            if (a[i] == mi)
            {
                v.push_back(i);
            }
            else
            {
                while (a[i] > 2)
                {
                    int temp = a[i];
                    a[i] = (temp - 1) / mi + 1;
                    cout << i + 1 << " " << ind + 1 << endl;
                }
            }
        }
        forn(i, n)
        {
            if (a[i] == 2)
            {
                ind = i;
            }
        }
        forn(i, v.size())
        {
            while (a[v[i]] > 2)
            {
                int temp = a[v[i]];
                a[v[i]] = (temp - 1) / mi + 1;
                cout << v[i] + 1 << " " << ind + 1 << endl;
            }
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