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
    string s;
    cin >> s;
    int n = sz(s), c = 0, d = 0;
    if (s[0] == 'a')
    {
        forn(i, n)
        {
            if (c == 0 and s[i] == 'b')
            {
                d = i;
                c = 1;
            }
            if (c == 1 and s[i] == 'a')
            {
                d = i;
                c = 0;
                break;
            }
        }
        if (d == 0)
        {
            cout << 'a' << " ";
            forsn(i, 1, n - 1) { cout << 'a'; }
            cout << " ";
            cout << 'a' << " " << endl;
        }
        else if (c == 1)
        {
            if (d == n - 1)
            {
                forn(i, d - 1) { cout << s[i]; }
                cout << " ";
                forsn(i, d - 1, n - 1) { cout << s[i]; }
                cout << " ";
                cout << s[n - 1] << " " << endl;
            }
            else
            {
                forn(i, d) { cout << s[i]; }
                cout << " ";
                forsn(i, d, n - 1) { cout << s[i]; }
                cout << " ";
                cout << s[n - 1] << " " << endl;
            }
        }
        else
        {
            forn(i, d - 1) { cout << s[i]; }
            cout << " ";
            cout << 'b' << " ";
            forsn(i, d, n) { cout << s[i]; }
            cout << " " << endl;
        }
    }
    else
    {
        forn(i, n)
        {
            if (c == 0 and s[i] == 'a')
            {
                d = i;
                c = 1;
            }
            if (c == 1 and s[i] == 'b')
            {
                d = i;
                c = 0;
                break;
            }
        }
        if (d == 0)
        {
            cout << 'b' << " ";
            forsn(i, 1, n - 1) { cout << 'b'; }
            cout << " ";
            cout << 'b' << " " << endl;
        }
        else if (c == 1)
        {
            cout << 'b' << " ";
            cout << s[1] << " ";
            forsn(i, 2, n) { cout << s[i]; }
            cout << " " << endl;
        }
        else
        {
            forn(i, d - 1) { cout << s[i]; }
            cout << " ";
            cout << 'a' << " ";
            forsn(i, d, n) { cout << s[i]; }
            cout << " " << endl;
        }
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}