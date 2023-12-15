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
 

void dfs(vector<vector<int>> &fil,int le,priority_queue<int> &top,priority_queue<int,vector<int>,greater<int>> &bot,vector<int> &val,int med,vector<int> &ans,int node,int par){
    if(val[node]>med){
        top.push(val[node]);
    }
    else{
        bot.push(val[node]);
    }
    while(top.size()-bot.size()>1){
        bot.push(top.top());
        top.pop();
    }
    while(bot.size()-top.size()>1){
        top.push(bot.top());
        bot.pop();
    }
    if(bot.size()>top.size()){
        med=bot.top();
    }
    else{
        med=top.top();
    }
    if(le%2==1){
        ans.push_back(med);
    }
    for(auto x:fil[node]){
        if(x!=par){
        dfs(fil,le+1,top,bot,val,ans,med,x,node);
        }
    }

}
void solv()
{
    int n;
    cin>>n;
    vector<int> val(n);
    vector<vector<int>> fil(n);
    forn(i,n){
        cin>>val[i];
    }
    forn(i,n-1){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        fil[x].push_back(y);
        fil[y].push_back(x);
    }
    priority_queue<int> top;
    priority_queue<int,vector<int>,greater<int>> bot;
    vector<int> ans;
    dfs(fil,0,top,bot,val,-1,ans,root,-1);
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--){solv();}
}