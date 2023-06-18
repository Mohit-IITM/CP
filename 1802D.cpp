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
int mod = 1000000007;

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */
int findSmallestDifference(vector<int> A, vector<int> B, int n, map<pair<int, int>, int> m1, map<pair<int, int>, bool> m2)
{
    // Sort both arrays using
    // sort function
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int a = 0, b = 0;

    // Initialize result as max value
    int result = INT_MAX;

    // Scan Both Arrays upto
    // sizeof of the Arrays
    while (a < n && b < n)
    {
        if (abs(A[a] - B[b]) < result)
            if (m2[{A[a], B[b]}])
            {
                if (m1[{A[a], B[b]}] > 1)
                {
                    result = abs(A[a] - B[b]);
                }
            }
            else
                result = abs(A[a] - B[b]);
        cout << A[a] << " " << B[b]<<m1[{A[a],B[b]}]<<" "<<m2[] << endl;

        // Move Smaller Value
        if (A[a] < B[b])
        {
            a++;
        }
        else if (A[a] > B[b])
        {
            b++;
        }
        else
        {
            if (A[a + 1] < B[b + 1])
            {
                a++;
            }

            else if (A[a + 1] > B[b + 1])
            {
                b++;
            }
            else
            {
                a++;
            }
        }
    }

    // return final sma result
    return result;
}
void solv()
{
    int n;
    cin >> n;
    vector<int> A, B;
    map<pair<int, int>, int> m1;
    map<pair<int, int>, bool> m2;
    forn(i, n)
    {
        int x1, x2;
        cin >> x1;
        cin >> x2;
        A.push_back(x1);
        B.push_back(x2);
    }
    forn(i, n)
    {
        m1[{A[i], B[i]}]++;
        m2[{A[i], B[i]}] = true;
    }
    cout << findSmallestDifference(A, B, n, m1, m2) << endl;
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