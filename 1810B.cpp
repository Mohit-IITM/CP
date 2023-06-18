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
    if (n % 2 == 0)
    {
        cout << -1 << endl;
        return;
    }
    int x = n, po = 0, po2 = 1;

    while (x > 0)
    {
        x /= 2;
        po++;
        po2 *= 2;
    }
    po--;
    cout << po << endl;
    x = n;
    string s = "";
    while (po--)
    {
        if (((x + 1) / 2) % 2 == 0)
        {
            s += "2";
            x = (x - 1) / 2;
        }
        else
        {
            s += "1";
            x = (x + 1) / 2;
        }
    }
    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout << s[i] << " ";
    }

    cout << endl;
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