#include <bits/stdc++.h>  
#include <chrono>
#include <random>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
/* ************************************************************************************************************************************ */
typedef long long ll;
typedef long double ld;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define endl "\n"
#define ya cout<<"YES"<<endl;
#define na cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define int long long
int mod = 1000000007;
 
 
/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */
 


void solv()
{
    int n;
    cin >> n;
    int a[n], s, e, res = -3;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    s = 0;
    e = n - 1;
    while (e >= s)
    {
        for (int i = e; i >= s; i--)
        {
            if (__gcd(a[e], a[i]) == 1)
            {
                s = i;
                res = max(res, e + s);
                break;
            }
        }
        e--;
    }
    cout << res + 2 << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){solv();}
}