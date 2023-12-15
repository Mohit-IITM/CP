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
 

int getClosest(int, int, int);
 
// Returns element closest to target in arr[]
int findClosest(vector<int> arr, int n, int target)
{
    // Corner cases
  //left-side case
    if (target <= arr[0])
        return arr[0];
  //right-side case
    if (target >= arr[n - 1])
        return arr[n - 1];
 
    // Doing binary search
    int i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;
 
        if (arr[mid] == target)
            return arr[mid];
 
        /* If target is less than array element,
            then search in left */
        if (target < arr[mid]) {
 
            // If target is greater than previous
            // to mid, return closest of two
            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1],
                                  arr[mid], target);   
            j = mid;
        }
      /* Repeat for left half */
 
        // If target is greater than mid
        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid],
                                  arr[mid + 1], target);
            // update i
            i = mid + 1; 
        }
    }
 
    // Only single element left after search
    return arr[mid];
}
 
// Method to compare which one is the more close.
// We find the closest by taking the difference
// between the target and both values. It assumes
// that val2 is greater than val1 and target lies
// between these two.
int getClosest(int val1, int val2,
               int target)
{
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
}
void solv()
{
   int n,k;
   cin>>n>>k;
   vector<int> a(n);
   forn(i,n){
    cin>>a[i];
   }
   if(k>2){
    cout<<0<<endl;
   }
   else{
    if(k==1){
        sort(all(a));
        int mi=__LONG_LONG_MAX__;
        forsn(i,1,n){
            mi=min(a[i]-a[i-1],mi);
        }
        mi=min(mi,a[0]);
        cout<<mi<<endl;
    }
    else{
        int mi1=__LONG_LONG_MAX__;
        sort(all(a));
        forn(i,n){
            for(int j=i+1;j<n;j++){
                int su=a[j]-a[i];
                mi1=min(mi1,abs(su-findClosest(a,n,su)));
            }
        }
        int mi=__LONG_LONG_MAX__;
        forsn(i,1,n){
            mi=min(a[i]-a[i-1],mi);
        }
        mi=min(mi,a[0]);
        cout<<min(mi,mi1)<<endl;
    }
   }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--){solv();}
}