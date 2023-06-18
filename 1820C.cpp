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
    int a[n], b[n], c[n];
    forn(i, n)
    {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }
    sort(b, b + n);
    int mex = 0;
    forn(i, n)
    {
        if (b[i] == mex)
        {
            mex++;
        }
    }
    // cout << mex << endl;
    int st = -1, en = -1;
    forn(i, n)
    {
        if (a[i] == mex + 1)
        {
            st = i;
            break;
        }
    }
    forn(i, n)
    {
        if (a[i] == mex + 1)
        {
            en = i;
        }
    }
    if (st == -1)
    {
        if (mex == 0)
        {
            ya;
        }
        else
        {
            map<int, int> mp;
            forn(i, n)
            {
                mp[a[i]]++;
            }
            bool cond = false;
            for (auto x : mp)
            {
                if (x.second > 1)
                {
                    cond = true;
                    break;
                }
            }
            if (cond)
            {
                ya;
            }
            else
            {
                forn(i, n)
                {
                    if (a[i] > mex)
                    {
                        ya;
                        return;
                    }
                }
                na;
            }
        }
    }
    else
    {
        for (int i = st; i <= en; i++)
        {
            c[i] = mex;
        }
        int mex1 = 0;
        sort(c, c + n);
        forn(i, n)
        {
            if (c[i] == mex1)
            {
                mex1++;
            }
        }
        if (mex1 == mex + 1)
        {
            ya;
        }
        else
        {
            na;
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