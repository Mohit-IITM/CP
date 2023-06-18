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
    cin>>n;
    string s;
    cin>>s;
    int flag=0;
    forn(i,n/2){
        if(s[i]=='0'){
            if(s[n-1-i]=='1'){
                if(flag==2){
                    na;
                    return;
                }
                else{
                    flag=1;
                }
            }
            if(flag==1 and s[n-1-i]=='0'){
                flag=2;
            }
        }
        if(s[i]=='1'){
            if(s[n-1-i]=='0'){
                if(flag==2){
                    na;
                    return;
                }
                else{
                    flag=1;
                }
            }
            if(flag==1 and s[n-1-i]=='1'){
                flag=2;
            }
        }
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