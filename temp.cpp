#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <array>
#include <algorithm>
#include <queue>
#include <stack>
#include <list>
#include <chrono>
#include <random>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <iomanip>
using namespace std;

/* ************************************************************************************************************************************ */
#define int long long
int mod = 1000000007;

void solv()
{
    int n;
    cin >> n;
    int temp = (sqrtl(1 + 8 * n) + 1) / 2;
    int cov = temp * (temp - 1) / 2;
    cout << temp + n - cov << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}