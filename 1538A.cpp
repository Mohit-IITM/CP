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
 
 
/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */
 


void solv()
{
    int n;
    cin>>n;
    int a[n];
    forn(i,n){
        cin>>a[i];
    }
    int mi=n+1,ma=0,mii,maa;
    forn(i,n){
        if(a[i]>ma){
            ma=a[i];
            maa=i;
        }
        if(a[i]<mi){
            mi=a[i];
            mii=i;
        }
    }
    cout<<min(min(max(mii,maa)+1,max(n-mii,n-maa)),min(n-mii+maa+1,n-maa+mii+1))<<endl;
}
int32_t main()
{
      ios::sync_with_stdio(false);
      cin.tie(0);
    int t;cin>>t;
    while(t--){solv();}
}