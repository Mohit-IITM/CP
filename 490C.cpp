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
    string s;
    cin >> s;
    int a, b;
    cin >> a >> b;
    map<int, int> m;
    int rema = 0;
    vector<int> remb, remb1;
    remb1.push_back(1);
    remb.push_back(0);
    // cout << s[0] << endl;
    for (int i = 0; i < s.size(); i++)
    {
        int dig = int32_t(s[i] - '0');
        rema = (rema * 10 + dig) % a;
        // cout<<rema<<endl;
        if (rema == 0)
        {
            m[i]++;
            // cout << i << endl;
        }
    }
    // reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        int dig = int32_t(s[i] - '0');
        remb.push_back((remb.back() * 10 + dig) % b);
        remb1.push_back((remb1.back() * 10) % b);
    }
    forn(i, s.size() + 1)
    {
        remb[i] *= remb1[s.size() - i];
        remb[i] %= b;
    }
    forn(i, s.size() + 1)
    {
        // cout << remb[i] << endl;
        if (remb[i] == remb[s.size()])
        {
            m[i - 1]++;
        }
    }
    for (auto x : m)
    {
        if (x.second == 2)
        {
            if (x.first != s.size() - 1)
            {
                if (s[x.first + 1] != '0')
                {
                    ya;
                    cout << s.substr(0, x.first + 1) << endl;
                    cout << s.substr(x.first + 1, s.size()) << endl;
                    return;
                }
            }
        }
        // cout << x.first << " " << x.second << endl;
    }
    na;
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