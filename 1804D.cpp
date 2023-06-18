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

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int tma = 0, tmi = 0;
    forn(i, n)
    {
        string s;
        cin >> s;
        int n1 = 0, n2 = 0, n3 = 0;
        int ma, mi;
        forn(j, m)
        {
            if (s[j] == '1')
            {
                n1++;
            }
        }
        int temp = 0;
        int co = 0;
        while (co < m)
        {
            if (s[co] == '1' and s[co + 1] == '1')
            {
                n2++;
                co += 2;
            }
            else
            {
                co++;
            }
        }
        co = 0;
        while (co < m)
        {
            if (co == 0)
            {
                if (s[0] == '0' and s[1] == '0')
                {
                    n3++;
                    co += 2;
                }
                else
                {
                    co++;
                }
            }
            else if (co == m - 3)
            {
                if (s[m - 2] == '0' and s[m - 1] == '0')
                {
                    n3++;
                    co += 2;
                }
                else
                {
                    co++;
                }
            }
            else if (s[co] == '0' and s[co + 1] == '0' and s[co + 2] == '0')
            {
                n3++;
                co += 3;
            }
            else
            {
                co++;
            }
        }
        if (n3 > m / 4)
        {
            n3 = m / 4;
        }
        if (n1 <= m / 2)
        {
            ma = n1;
        }
        else
        {
            ma = m / 2 + m / 4 - n3;
        }
        if (n2 > m / 4)
        {
            n2 = m / 4;
        }
        mi = n1 - n2;
        tma += ma;
        tmi += mi;
        // cout << ma << " " << mi << endl;
    }
    cout << tmi << " " << tma << endl;
}