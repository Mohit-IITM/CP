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
    string s;
    cin >> s;
    int l = 0, r = 0, op = 0, op1 = 0;
    vector<bool> ans(n, false);
    forn(i, n)
    {
        if (s[i] == '(')
        {
            l++;
            op++;
            if (op1 > 0)
            {
                op1--;
            }
        }
        else
        {
            r++;
            op1++;
            if (op > 0)
            {
                op--;
            }
            else
            {
                ans[i] = true;
            }
        }
    }
    int po = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == ')')
        {
            po++;
        }
        else
        {
            if (po > 0)
            {
                po--;
            }
            else
            {
                ans[i] = true;
            }
        }
    }
    if (l != r)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        if (op == 0 || op1 == 0)
        {
            cout << 1 << endl;
            forn(i, n)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << 2 << endl;
            int ind = n;
            forn(i, n)
            {
                if (ans[i])
                {
                    cout << 2 << " ";
                }
                else
                {
                    cout << 1 << " ";
                }
            }
            cout << endl;
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