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
    int n,c1=0,c2=0,su=0;
    cin>>n;
    forn(i,n){
        int x;
        cin>>x;
        if(x==1){
            c1++;
        }
        else{
            c2++;
        }
        su+=x;
    }
    if(su%2==1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        if(c1==0 and c2%2==1){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            return;
        }
    }

}
int32_t main()
{
      ios::sync_with_stdio(false);
      cin.tie(0);
    int t;cin>>t;
    while(t--){solv();}
}