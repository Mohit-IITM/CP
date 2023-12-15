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
void rec(vector<int> &A, set<int> &pres, vector<set<int>> &ans)
{
    if (pres.size() == A.size())
    {
        ans.push_back(pres);
        return;
    }
    for (auto x : A)
    {
        pres.insert(x);
        rec(A, pres, ans);
        pres.erase(x);
    }
}
void solv()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto &x : A)
    {
        cin >> x;
    }
    vector<set<int>> ans1;
    vector<vector<int>> ans;
    set<int> prems;
    rec(A, prems, ans1);
    for (auto x : ans1)
    {
        // vector<int> temp;
        for (auto y : x)
        {
            // temp.push_back(y);
            cout << y << " ";
        }
        // ans.push_back(temp);
        cout << endl;
    }
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