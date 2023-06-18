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
    sort(all(s));
    int n = s.size();
    map<char, int> mp;
    string s1 = "", s2 = "";
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    for (auto x : mp)
    {
        forn(i, x.second / 2)
        {
            s1 += x.first;
        }
    }
    for (auto x : mp)
    {
        if (x.second % 2 == 1)
        {
            s2 += x.first;
        }
    }
    string s7 = "";
    s7 += s2[0];
    reverse(all(s2));
    forn(i, sz(s2) - 1)
    {
        s7 += s2[i];
    }
    reverse(all(s7));
    string s3 = s1 + s7;
    reverse(all(s1));
    s3 += s1;
    cout << s3 << endl;
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