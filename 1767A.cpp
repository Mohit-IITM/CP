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
    int x[5],y[5];
    bool flag=true;
    forn(i,3){cin>>x[i]>>y[i];}
    x[3]=x[0];y[3]=y[0];
    x[4]=x[1];y[4]=y[1];
    forn(i,3)
    {
        if(x[i]==x[i+1]){
            if(y[i]==y[i+2] or y[i+1]==y[i+2]){
                flag=false;
            }
        }
        if(y[i]==y[i+1]){
            if(x[i]==x[i+2] or x[i+1]==x[i+2]){
                flag=false;
            }
        }
    }
    if(flag){ya}
    else{na}
    

}
int32_t main()
{
    int t;cin>>t;
    while(t--){solv();}
}