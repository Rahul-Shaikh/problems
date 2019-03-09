#include <iostream>
#include <vector>

#define repi(n) for(int i = 0;i < n;i++)

using namespace std;
typedef long long ll;
int main(void)
{
    int n; int w;
    scanf("%d%d", &n, &w);
    vector<int> value(n), weight(n);
    repi(n) scanf("%d%d", &weight[i], &value[i]);
    int value_total = 0;
    for (int x : value) value_total += x;
    ll big_num = 1e18 + 5;
    vector<ll> dp(value_total + 1, big_num);
    dp[0] = 0;
    for(int item = 0; item < n; item++)
    {
        for (int value_without = value_total - value[item]; value_without >=0; value_without--)
        {
            dp[value_without+value[item]] = min(dp[value_without+value[item]], dp[value_without] + weight[item]);
        }
    }
    ll ans = 0;
    for (int i = value_total; i >= 0; i--)
    {
        if (dp[i] <= w)
        {
            ans = (ll) i;
            break;
        }
    }
    printf("%lld\n", ans);
}