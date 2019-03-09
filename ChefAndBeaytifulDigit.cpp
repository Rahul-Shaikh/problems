#include <iostream>
#include <vector>
#include <iterator>
#include <cstring>
#include <cmath>

#define fori(s, n) for (int i = s; i < n; i++)
using namespace std;
typedef long long ll;

ll ipow(int n, int x)
{
    ll ans = 1;
    fori(0, x)
    {
        ans *= n;
    }
    return ans;
}
int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int d, digits[20], digitNum = 0;
        ll n;
        scanf("%lld %d", &n, &d);
        ll temp = n;
        while(temp)
        {
            digits[digitNum++] = temp%10;
            temp /= 10;
        }
        ll ans = 0;
        if (digits[0] > d) 
        {
            digits[0] = d;
            ans = d;
        }
        else ans = digits[0];
        ll count = 1;
        for (int i = 1; i < digitNum; i++)
        {
            if (digits[i] > (ans/count))
            {
                ans = ans*10 + d;
                count *= 10;
            }
            else
            {
                ans = ans + digits[i]*ipow(10, i);
                count *= 10;
            }
        }
        printf("%lld\n", ans);
    }
}