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
    int n, q;
    cin >> n >> q;
    int a[n];
    forn(i, n) { cin >> a[i]; }
    int temp, temp1, temp2;
    int ch = 0;
    int t1;
    int sum = 0;
    map<int, int> m;
    forn(i, n)
    {
        sum += a[i];
    }
    forn(i, q)
    {
        cin >> t1;

        if (t1 == 2)
        {
            int x;
            cin >> x;
            sum = n * x;
            temp = x;
            ch++;
            m.clear();
            cout << sum << endl;
        }
        if (t1 == 1)
        {
            int x, y;
            cin >> x >> y;
            if (ch > 0)
            {
                if (m.find(x) != m.end())
                {
                    sum += y - m[x];
                    m[x] = y;
                }
                else
                {
                    sum += y - temp;
                    m[x] = y;
                }
            }
            else
            {
                sum += y - a[x - 1];
                a[x - 1] = y;
            }
            cout << sum << endl;
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solv();
    }
}