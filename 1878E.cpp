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
string to_bin(int x)
{
    string s = "";
    while (x)
    {
        if (x & 1)
        {
            s += '1';
        }
        else
        {
            s += '0';
        }
        x /= 2;
    }
    forn(i, 70 - sz(s))
    {
        s += '0';
    }
    reverse(all(s));
    return s;
}
void solv()
{
    int n;
    cin >> n;
    vector<vector<int>> pref(70, vector<int>(n+1, 0));
    vector<int> a(n);
    forn(i, n)
    {
        cin>>a[i];
        string s = to_bin(a[i]);
        forn(j, 70)
        {
            if (s[j] == '1')
            {
                pref[j][i+1]++;
            }
            pref[j][i+1] += pref[j][i];
        }
    }
    int q;
    cin>>q;
    forn(i,q){
        int lo,k;
        cin>>lo>>k;
        if(k>a[lo]){
            cout<<-1<<" ";
        }
        else{
            string s = to_bin(k);
            vector<int> targ(70,0);
            forn(i,70){
                if(s[i]=='1'){
                    targ[i]++;
                }
                targ[i]+=pref[i][lo];
            }
            int mind=n;
            
        }
    }
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