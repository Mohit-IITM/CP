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
    int n = 100, x = 10, el = -1, element, value;
    vector<int> a(n, x);
    // Creates a vector with n elements , all equal to x.

    vector<vector<int>> a(n, vector<int>(n, 0));
    // n*n 2d vector with all zeros
    // Notice how the initialization is done.

    vector<int> l;
    // Similar to py list, you can keeping adding elements
    l.push_back(el);
    // push_back is append.

    vector<string> vs;
    // Vector of strings

    map<int, int> m;
    // Similar to py dict, elements not in the map have value 0.
    m[element] = value;
    // Each element is stored as a key-value pair.
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
    // x is an element in map. x.first is key. x.second is it's value.

    // You can create any sort of structure you want.
    vector<map<vector<int>, int>> ds1;
    // This is a vector where each element is a map which points from vector to int.

    // Sample implementation of a frequency array.
    map<int, int> freq;
    forn(i, n)
    {
        cin >> x;
        freq[x]++;
    }
    // The map now has the counts of each x.
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