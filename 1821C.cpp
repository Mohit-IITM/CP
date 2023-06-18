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
    string s;
    cin >> s;
    int n = s.length();
    set<char> st;
    forn(i, n)
    {
        st.insert(s[i]);
    }
    int ma = 1e5;
    set<char>::iterator itr;
    for (itr = st.begin(); itr != st.end(); itr++)
    {
        int c = 0, c1 = 0;
        char ch = *itr;
        forn(i, n)
        {
            if (s[i] != ch)
            {
                c1++;
            }
            else
            {
                c = max(c, c1);
                c1 = 0;
            }
        }
        c = max(c, c1);
        int r = log2(c);
        if (c == 0)
        {
            r = -1;
        }
        ma = min(r + 1, ma);
    }
    cout << ma << endl;
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