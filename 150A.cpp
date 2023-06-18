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
    int n;
    cin >> n;
    map<int, int> facs;
    for (int i = 2; i < sqrt(n) + 2; i++)
    {
        while (n % i == 0)
        {
            facs[i]++;
            n /= i;
        }
    }
    if (n != 1)
    {
        facs[n]++;
    }
    int divs = 0;
    vector<int> ones, twos;
    for (auto x : facs)
    {
        divs += x.second;
        if (x.second > 1)
        {
            twos.push_back(x.first);
        }
        else
        {
            ones.push_back(x.first);
        }
    }
    if (divs < 2)
    {
        cout << 1 << endl;
        cout << 0 << endl;
    }
    else if (divs == 2)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
        if (ones.size() > 1)
        {
            cout << ones[0] * ones[1] << endl;
        }
        else
        {
            cout << twos[0] * twos[0] << endl;
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solv();
    }
}