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
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<char>> v(n,vector<int>(m)),co(n,vector<int>(m,0));
    forn(i,n)
    {
        forn(j,m)
        {
            cin>>v[i][j];
            if(v[i][j]=='.'){
                if(i>0){
                    if(v[i-1][j]=='.'){
                        co[i][j]++;
                    }
                }
                if(j>0){
                    if(v[i][j-1]=='.'){
                        co[i][j]++;
                    }
                }
                if(j<m-1){
                    if(v[i][j+1]=='.'){
                        co[i][j]++;
                    }
                }
                if(i<n-1){
                    if(v[i+1][j]=='.'){
                        co[i][j]++;
                    }
                }
            }
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