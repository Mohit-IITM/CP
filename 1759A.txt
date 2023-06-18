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
    string s;
    cin>>s;
    forn(i,sz(s)-1){
        if(s[i]=='Y'){
            if(s[i+1]!='e'){
                na;
                return;
            }
        }
        else if(s[i]=='e'){
            if(s[i+1]!='s'){
                na;
                return;
            }
        }
        else if(s[i]=='s'){
            if(s[i+1]!='Y'){
                na;
                return;
            }
        }
        else{
            na;
            return;
        }
    }
    if(s[sz(s)-1]!='s' and s[sz(s)-1]!='Y' and s[sz(s)-1]!='e'){
        na;
        return;
    }
    ya;

}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){solv();}
}