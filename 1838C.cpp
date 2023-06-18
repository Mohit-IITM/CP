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
int modInverse(int A, int M)
{
    int m0 = M;
    int y = 0, x = 1;
    if (M == 1)
        return 0;
    while (A > 1)
    {
        int q = A / M;
        int t = M;
        M = A % M, A = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
    {
        x += m0;
    }
    return x;
}
vector<bool> sieve(int n)
{
    // Time Complexity:- O(log(log(n)))
    vector<bool> is_prime(n + 1, 1);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && 1LL * i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
    return is_prime;
}

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n, m;
    cin >> n >> m;
    vector<bool> prime;
    prime = sieve(max(n, m));
    if (!prime[m])
    {
        int ind = 1;
        forn(i, n)
        {
            forn(j, m)
            {
                cout << ind << " ";
                ind++;
            }
            cout << endl;
        }
    }
    else if (!prime[n])
    {
        vector<vector<int>> mat(n, vector<int>(m));
        int ind = 1;
        forn(i, m)
        {
            forn(j, n)
            {
                mat[j][i] = ind;
                ind++;
            }
        }
        forn(i, n)
        {
            forn(j, m)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        vector<vector<int>> mat(n, vector<int>(m, 0));
        int ind = 1;
        forn(i, n)
        {
            if (i % 2 == 0)
            {
                forn(j, m)
                {
                    mat[i][j] = ind;
                    ind++;
                }
            }
        }
        forn(i, n)
        {
            if (i % 2 == 1)
            {
                forn(j, m)
                {
                    mat[i][j] = ind;
                    ind++;
                }
            }
        }
        forn(i, n)
        {
            forn(j, m)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    cout << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}