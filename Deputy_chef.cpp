#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

#define FORI(s, n) for (int i = s; i < n; i++)
#define FORJ(s, n) for (int j = s;j < n;j++)

using namespace std;
typedef long long ll;

int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        vector<int> a(n+2), d(n+2);
        FORI(0, n) scanf("%d", &a[i+1]);
        FORI(0, n) scanf("%d", &d[i+1]);
        a[0] = a[n]; a[n+1] = a[1];
        int ans = -1;
        FORI(1, n+1)
        {
            if (a[i-1] + a[i+1] < d[i]) ans = max(ans, d[i]);
        }
        printf("%d\n", ans);
    }
}