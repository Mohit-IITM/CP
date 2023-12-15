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
    int n, m, k;
    cin >> n >> m >> k;
    set<double> a, b;
    double sua = 0, sub = 0;
    forn(i, n)
    {
        double x;
        cin >> x;
        a.insert(x);
        sua += x;
    }
    forn(i, m)
    {
        double x;
        cin >> x;
        b.insert(x);
        sub += x;
    }
    double mans = 0;
    forn(i, k)
    {
        vector<double> vals(4, 0);
        vector<bool> choi(4, false);
        double ma = 0;
        if (n > 1)
        {
            double maa = *(a.rbegin());
            vals[0] = (sub + maa) / (m + 1) + (sua - maa) / (n - 1);
            ma = max(ma, vals[0]);
            double mia = *(a.begin());
            vals[1] = (sub + mia) / (m + 1) + (sua - mia) / (n - 1);
            ma = max(ma, vals[1]);
        }
        if (m > 1)
        {
            double maa = *(b.rbegin());
            vals[2] = (sub - maa) / (m - 1) + (sua + maa) / (n + 1);
            ma = max(ma, vals[2]);
            double mia = *(b.begin());
            vals[3] = (sub - mia) / (m - 1) + (sua + mia) / (n + 1);
            ma = max(ma, vals[3]);
        }
        forn(i, n)
        {
            if (vals[i] == ma)
            {
                choi[i] = true;
                break;
            }
        }
        if (choi[0])
        {
            n--;
            m++;
            double to = *(a.rbegin());
            sua -= to;
            sub += to;
            a.erase(to);
            b.insert(to);
        }
        else if (choi[1])
        {
            n--;
            m++;
            double to = *(a.begin());
            sua -= to;
            sub += to;
            a.erase(to);
            b.insert(to);
        }
        else if (choi[2])
        {
            n++;
            m--;
            double to = *(b.rbegin());
            sub -= to;
            sua += to;
            b.erase(to);
            a.insert(to);
        }
        else if (choi[3])
        {
            n++;
            m--;
            double to = *(b.begin());
            sub -= to;
            sua += to;
            b.erase(to);
            a.insert(to);
        }
        mans = max(mans, ma);
    }
    cout << setprecision(10);
    cout << mans / 2 << endl;
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