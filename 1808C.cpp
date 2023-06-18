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
void meh(string s1, string s2)
{
}
void solv()
{
    int l, r;
    cin >> l >> r;
    string s1 = to_string(l), s2 = to_string(r);
    if (s1.size() != s2.size())
    {
        forn(i, s1.size())
        {
            cout << "9";
        }
        cout << endl;
        return;
    }
    int ind = -1;
    forn(i, s1.size())
    {
        if (s1[i] != s2[i])
        {
            ind = i;
            break;
        }
        else
        {
            cout << s1[i];
        }
    }
    if (ind == -1)
    {
        cout << endl;
        return;
    }
    if (ind == 0)
    {
        if (abs(int32_t(s1[0]) - int32_t(s1[1])) > abs(int32_t(s2[0]) - int32_t(s2[1])))
        {
            cout << s2[0] << s2[1];
            forn(i, s1.size() - 2)
            {
                cout << "0";
            }
        }
        else
        {
            cout << s1[0] << s1[1];
            forn(i, s1.size() - 2)
            {
                cout << s1[0];
            }
        }
        cout << endl;
    }
    else
    {
        if (s1[ind] < s1[ind - 1] and s2[ind] > s1[ind - 1])
        {
            for (int i = 0; i < s1.size() - ind; i++)
            {
                cout << s1[i];
            }
        }
        else
        {
            if (abs(int32_t(s1[ind - 1]) - int32_t(s1[ind])) > abs(int32_t(s2[ind - 1]) - int32_t(s2[ind])))
            {
                cout << s2[0] << s2[1];
                forn(i, s1.size() - 2)
                {
                    cout << "0";
                }
            }
            else
            {
                cout << s1[0] << s1[1];
                forn(i, s1.size() - 2)
                {
                    cout << s1[0];
                }
            }
            cout << endl;
        }
        cout << endl;
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