#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main(void)
{
    int N, W;
    scanf("%d%d", &N, &W);
    vector<ll> dp(W+1);
    for (int items = 0; items < N; items++)
    {
        int witem;
        ll vitem;
        scanf("%d%lld", &witem, &vitem);
        for (int i = W-witem; i >= 0; i--)
        {
            dp[i+witem] = max(dp[i] + vitem, dp[i+witem]);
        }
    }
    printf("%lld\n", dp[W]);
    return 0;
}