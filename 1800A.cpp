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
    int count = 0, n1 = 0;
    if (s[0] != 'm')
    {
        if (s[0] != 'M')
        {
            na;
            return;
        }
    }
    forn(i, n)
    {
        if (count == 0)
        {
            if (s[i] == 'm' or s[i] == 'M')
            {
                n1 = 1;
            }
            else if (s[i] == 'e' or s[i] == 'E')
            {
                count++;
            }
            else
            {
                na;
                return;
            }
        }
        else if (count == 1)
        {
            if (s[i] == 'e' or s[i] == 'E')
            {
                n1 = 1;
            }
            else if (s[i] == 'o' or s[i] == 'O')
            {
                count++;
            }
            else
            {
                na;
                return;
            }
        }
        else if (count == 2)
        {
            if (s[i] == 'o' or s[i] == 'O')
            {
                n1 = 1;
            }
            else if (s[i] == 'w' or s[i] == 'W')
            {
                count++;
            }
            else
            {
                na;
                return;
            }
        }
        else if (count == 3)
        {
            if (s[i] == 'w' or s[i] == 'W')
            {
                n1 = 1;
            }
            else
            {
                na;
                return;
            }
        }
    }
    if (count == 3)
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