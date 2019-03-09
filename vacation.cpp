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
#include <queue>
#include <stack>
#include <map>
#include <iterator>
#include <utility>

#define ll int64_t
#define loop(i,b,e) for (int i = b; i < e; i++)
#define rep(n) for (int i = 0; i < n; i++)

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);
    int happy[N][3];
    rep(N)
    {
        scanf("%d %d %d", &happy[i][0], &happy[i][1], &happy[i][2]);
    }
    int dp[N][3];
    rep(3) dp[0][i] = happy[0][i];
    loop(i, 1, N)
    {
        dp[i][0] = happy[i][0] + max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = happy[i][1] + max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = happy[i][2] + max(dp[i-1][1], dp[i-1][0]);
    }
    int m = dp[N-1][2];
    rep(2)
    {
        m = max(dp[N-1][i], m);
    }
    printf("%d\n", m);
    return 0;
}
