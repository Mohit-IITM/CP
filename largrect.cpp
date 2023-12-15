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
    vector<vector<int>> matrix(n, vector<int>(m));
    forn(i, n)
    {
        forn(j, m)
        {
            cin >> matrix[i][j];
        }
    }
    vector<vector<int>> m2(n, vector<int>(m)), m3(n, vector<int>(m)), m4(n, vector<int>(m)), m5(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        m2[i][0] = matrix[i][0];
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                m2[i][j] += (m2[i][j - 1] + matrix[i][j]);
            }
        }
    }
    for (int j = 0; j < m; j++)
    {
        m3[0][j] = matrix[0][j];
        for (int i = 1; i < n; i++)
        {
            if (matrix[i][j] != 0)
            {
                m3[i][j] += (m3[i - 1][j] + matrix[i][j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (m2[i][j] == 0)
            {
                m4[i][j] = INT_MAX;
                m5[i][j] = INT_MAX;
            }
            else
            {
                m4[i][j] = m2[i][j];
                m5[i][j] = m3[i][j];
            }
        }
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = 1; i < n; i++)
        {
            m4[i][j] = min(m4[i][j], m4[i - 1][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            m5[i][j] = min(m5[i][j], m5[i][j - 1]);
        }
    }
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ma = max(ma, m3[i][j] * m4[i][j]);
            ma = max(ma, m5[i][j] * m2[i][j]);
        }
    }
    cout << ma << endl;
    for (auto x : m2)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (auto x : m3)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (auto x : m4)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (auto x : m5)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solv();
    }
}