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
    int l[n], r[n];
    forn(i, n)
    {
        cin >> l[i];
    }
    forn(i, n)
    {
        cin >> r[i];
    }
    int mnb = 0, minseg = -1, rem = k;
    priority_queue<int> pq;
    forn(i, n)
    {
        mnb += r[i] - l[i] + 1;
        if (mnb < k)
        {
            minseg = i;
            rem = k - mnb;
        }
    }
    minseg++;
    if (minseg == n)
    {
        cout << -1 << endl;
        return;
    }
    int fpos = l[minseg] + rem - 1;
    for (int i = 0; i < minseg; i++)
    {
        pq.push(r[i] - l[i] + 1);
    }
    int ans = minseg * 2 + 2 + fpos;
    int fkans = ans;
    int le = r[minseg] - fpos;
    int fi = minseg;
    // cout << minseg << " " << fpos << endl;
    while (true)
    {
        if (pq.empty())
        {
            pq.push(r[fi] - l[fi] + 1);
            break;
        }
        int x = pq.top();
        if (x <= le)
        {
            minseg--;
            fpos += x;
            fkans = minseg * 2 + 2 + fpos;
            le -= x;
            pq.pop();
            // cout << x << " " << le << " " << fkans << endl;
            ans = min(ans, fkans);
        }
        else
        {
            pq.push(r[fi] - l[fi] + 1);
            break;
        }
    }
    // cout << minseg << " " << fpos << endl;
    for (int i = minseg + 1; i < n; i++)
    {
        le = r[i] - l[i] + 1;
        minseg++;
        while (true)
        {
            if (pq.empty())
            {
                pq.push(r[i] - l[i] + 1);
                break;
            }
            int x = pq.top();
            if (x <= le)
            {
                minseg--;
                fpos += x;
                fkans = minseg * 2 + 2 + fpos;
                le -= x;
                pq.pop();
                ans = min(ans, fkans);
            }
            else
            {
                pq.push(r[i] - l[i] + 1);
                break;
            }
        }
    }
    cout << ans << endl;
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