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

void dfs(vector<vector<bool>> &marked, int i, int j, int &vol, vector<vector<int>> &a)

// The '&' indicates passing by refrence. It is very important.
// If we don't do that a new copy of the vectors is made everytime we call dfs.
// It is bad for 2 reasons. 1.) None of the changes we make inside dfs will be reflected.
// 2) It is o(n) complexity to create a new vecotr, so if we call dfs n times we get o(n^2) program.
// This can be avoided just by passing by refrence.

{
    int n = a.size();
    int m = a[0].size();
    if (i != n - 1)
    {
        if (a[i + 1][j] != 0 && !marked[i + 1][j])
        {
            marked[i + 1][j] = true;
            // Marking node if it's not marked.

            vol += a[i + 1][j];
            // Adding volume of that node.

            dfs(marked, i + 1, j, vol, a);
            // Running dfs on the next node.
        }
    }
    if (j != m - 1)
    {
        if (a[i][j + 1] != 0 && !marked[i][j + 1])
        {
            marked[i][j + 1] = true;
            vol += a[i][j + 1];
            dfs(marked, i, j + 1, vol, a);
        }
    }
    if (i != 0)
    {
        if (a[i - 1][j] != 0 && !marked[i - 1][j])
        {
            marked[i - 1][j] = true;
            vol += a[i - 1][j];
            dfs(marked, i - 1, j, vol, a);
        }
    }
    if (j != 0)
    {
        if (a[i][j - 1] != 0 && !marked[i][j - 1])
        {
            marked[i][j - 1] = true;
            vol += a[i][j - 1];
            dfs(marked, i, j - 1, vol, a);
        }
    }
}

void solv()
{
    int n, m, vol = 0, mavol = 0;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    // Intializing the graph.

    vector<vector<bool>> marked(n, vector<bool>(m, false));
    // Vector for checking if each vertice is visited or not.

    forn(i, n)
    {
        forn(j, m)
        {
            cin >> a[i][j];
        }
    }
    // In this paticular question, there may be many disconnected parts in the graph.
    // We are checking for each part by running through all parts and marking all points connected to the point.
    // We run dfs only when we reach an unmarked point to make sure we mark each graph only once.

    forn(i, n)
    {
        forn(j, m)
        {
            if (a[i][j] != 0)
            {
                if (!marked[i][j])
                {
                    marked[i][j] = true;
                    // Marking the point as visited.

                    vol += a[i][j];
                    // Adding the volume of the point.

                    dfs(marked, i, j, vol, a);
                    // Running DFS on the unmarked point.

                    mavol = max(vol, mavol);
                    // Storing max volume.

                    vol = 0;
                }
            }
        }
    }
    cout << mavol << endl;
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