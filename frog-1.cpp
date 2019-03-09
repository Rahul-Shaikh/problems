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

#define ll int64_t
#define rep(i,b,e) for (int i = b; i < e; i++)

using namespace std;

int main(void)
{
    int n;
    scanf("%d", &n);
    vector<int> h(n);
    for (int &x : h) scanf("%d", &x);
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
    }
    printf("%d\n", dp[n-1]);
    return 0;
}