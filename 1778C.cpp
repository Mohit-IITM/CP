#include <bits/stdc++.h>
#include <chrono>
#include <random>
#include <iomanip>
#include <fstream>

using namespace std;

/* ************************************************************************************************************************************ */
typedef long long ll;
typedef long double ld;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define endl "\n"
#define ya cout << "YES" << endl;
#define na cout << "NO" << endl;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define int long long

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */
void combinationUtil(int arr[], int data[],
                     int start, int end,
                     int index, int r);
// The main function that prints
// all combinations of size r
// in arr[] of size n. This function
// mainly uses combinationUtil()
void printCombination(int arr[], int n, int r)
{
    // A temporary array to store
    // all combination one by one
    int data[r];

    // Print all combination using
    // temporary array 'data[]'
    combinationUtil(arr, data, 0, n - 1, 0, r);
}
vector<vector<int>> v;
/* arr[] ---> Input Array
data[] ---> Temporary array to
store current combination
start & end ---> Starting and
Ending indexes in arr[]
index ---> Current index in data[]
r ---> Size of a combination to be printed */
void combinationUtil(int arr[], int data[],
                     int start, int end,
                     int index, int r)
{
    // Current combination is ready
    // to be printed, print it
    if (index == r)
    {
        vector<int> a;
        for (int j = 0; j < r; j++)
        {
            // cout << data[j] << " ";
            a.push_back(data[j]);
        }
        // cout << endl;
        v.push_back(a);
        return;
    }

    // replace index with all possible
    // elements. The condition "end-i+1 >= r-index"
    // makes sure that including one element
    // at index will make a combination with
    // remaining elements at remaining positions
    for (int i = start; i <= end &&
                        end - i + 1 >= r - index;
         i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i + 1,
                        end, index + 1, r);
    }
}
void solv()
{
    int n, k;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    map<int, int> m1;
    vector<char> v1;
    forn(i, n)
    {
        if (m1[a[i]] == 0)
        {
            m1[a[i]]++;
            v1.push_back(a[i]);
        }
    }
    printCombination(v1, sz(v1), k);
    // forn(i, v.size())
    // {
    //     forn(j, v[i].size())
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}