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
 


int32_t main()
{
     ios::sync_with_stdio(false);
     cin.tie(0);
     int n;
     cin>>n;
     int ans=0;
     while(n>0){
        ans+=n/5;
        n/=5;
     }
     cout<<ans;
}