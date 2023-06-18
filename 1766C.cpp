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

void solv()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int flag = true;
    int a[n];

    forn(i, n)
    {
        if (s1[i] == 'B' and s2[i] != 'B')
        {
            a[i] = 1;
        }
        else if (s2[i] == 'B' and s1[i] != 'B')
        {
            a[i] = 2;
        }
        else if (s1[i] == 'B' and s2[i] == 'B')
        {
            a[i] = 3;
        }
        else
        {
            a[i] = 4;
        }
    }
    int j, st;
    forn(i, n)
    {
        if (a[i] != 3)
        {
            j = i;
            break;
        }
    }
    st = j;
    forsn(i, st + 1, n)
    {
        if (a[i] == 4)
        {
            flag = false;
        }
        if (a[i] != 3)
        {
            // cout << a[j] << " " << a[i] << endl;
            if (a[i] == a[j] and (i - j) % 2 == 0)
            {
                flag = false;
            }
            else if (a[i] != a[j] and (i - j) % 2 == 1)
            {
                flag = false;
            }
            j = i;
        }
    }
    if (flag)
    {
        ya;
    }
    else
    {
        na;
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