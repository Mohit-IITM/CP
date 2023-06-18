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
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    priority_queue<int> pq1, pq2;
    forn(i, n)
    {
        int x;
        cin >> x;
        pq1.push(x);
    }
    forn(i, m)
    {
        int x;
        cin >> x;
        pq2.push(x);
    }
    while (true)
    {
        if (pq1.empty() || pq2.empty())
        {
            break;
        }
        if (abs(pq1.top() - pq2.top()) <= k)
        {
            ans++;
            pq1.pop();
            pq2.pop();
        }
        else if (pq1.top() > pq2.top())
        {
            pq1.pop();
        }
        else
        {
            pq2.pop();
        }
    }
    cout << ans << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solv();
}