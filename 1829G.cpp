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

void solv(vector<vector<int>> a)
{
    int n;
    cin >> n;

    int row, col;
    forn(i, 2023)
    {
        forn(j, i + 1)
        {
            if (a[i][j] == n)
            {
                row = i;
                col = j;
                break;
            }
        }
    }
    int st = 1;
    int ans = 0;
    cout << row << " " << col << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vector<vector<int>> a(2023, vector<int>(2023, 0));
    int str = 1;
    forn(i, 2023)
    {
        forn(j, i + 1)
        {
            int col = (2023 - i - 1) / 2 + j;
            cout << i << " " << col << " " << str << endl;
            a[i][col] = str;
            str++;
        }
    }
    while (t--)
    {
        solv(a);
    }
}