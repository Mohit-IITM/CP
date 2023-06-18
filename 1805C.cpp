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
    int n, m;
    cin >> n >> m;
    int k[n];
    forn(i, n)
    {
        cin >> k[i];
    }
    sort(k, k + n);
    forn(i, m)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a * c < 0)
        {
            na;
        }
        else
        {
            int mi = ceil(b - 2 * sqrt(a * c));
            if (mi == b - 2 * sqrt(a * c))
            {
                mi++;
            }
            int ma = floor(b + 2 * sqrt(a * c));
            if (ma == b + 2 * sqrt(a * c))
            {
                ma--;
            }
            int st = 0;
            int end = n - 1;
            while (st <= end)
            {
                int mid = (st + end) / 2; // or elegant way of st + (end - st) / 2;
                if (k[mid] < mi)
                {
                    st = mid + 1;
                }
                else
                { // mid > target
                    end = mid - 1;
                }
            }
            // cout << ma << " " << mi << " " << st << endl;
            if (k[st] > ma)
            {
                na;
            }
            else
            {
                ya;
                cout << k[st] << endl;
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