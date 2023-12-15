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
    int t;
    cin >> t;
    vector<int> v;
    int k = 1;
    int ma = 1e6;
    while (true)
    {
        if (k * (k + 1) / 2 > ma)
        {
            break;
        }
        v.push_back(k * (k + 1) / 2);
        k++;
    }
    map<int, int> m1, m2;
    m1[1] = 1;
    m2[1] = 1;
    for (int i = 2; i <= ma; i++)
    {
        int temp = lower_bound(v.begin(), v.end(), i) - v.begin();
        if (i == v[temp])
        {
            m2[i] = i * i;
            m1[i] = i * i + m1[i - temp - 1];
        }
        else
        {
            m2[i] = i * i + m2[i - temp];
            if (i - 1 == v[temp - 1])
            {
                m1[i] = i * i + m2[i - temp];
            }
            else
            {
                m1[i] = i * i + m2[i - temp] + m1[i - temp - 1];
            }
        }
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << m1[n] << endl;
    }
}
