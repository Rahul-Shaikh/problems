#include <iostream>
#include <vector>
#include <stdint.h>
#include <cstring>
#include <cctype>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <cstdarg>
#include <cstdio>
#include <algorithm>
#include <iterator>
#include <utility>

#define ll int64_t
#define rep(i,b,e) for (int i = b; i < e; i++)

using namespace std;

int main(void)
{
    int n;
    int k;
    scanf("%d %d", &n, &k);
    vector<int> h(n);
    for (int &x : h) scanf("%d", &x);
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    int vmin = 1e5;
    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i-j < 0) break;
            vmin = min(dp[i-j]+abs(h[i]-h[i-j]), vmin);
        }
        dp[i] = vmin;
        vmin = 1e5;
    }
    printf("%d\n", dp[n-1]);
    return 0;
}