#include <iostream>
#include <vector>

#define fori(s, n) for (int i = s; i < n; i++)
typedef long long ll;
using namespace std;
int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        ll ans = 0;
        int n;
        scanf("%d", &n);
        int a[n];
        fori(0, n) scanf("%d", &a[i]);
        vector<int> pos, neg, zero;
        fori(0, n)
        {
            if (a[i] > 0) pos.push_back(a[i]);
            else if (a[i] < 0) neg.push_back(a[i]);
            else zero.push_back(a[i]);
        }
        if (neg.size() == 0)
        {
            printf("%d %d\n", (int) zero.size() + (int) pos.size(), (int) pos.size() + (int) zero.size());
        }
        else if (pos.size() == 0)
        {
            printf("%d %d\n", (int) zero.size() + (int) neg.size(), (int) neg.size() + (int) zero.size());
        }
        else if (pos.size() > neg.size())
        {
            printf("%d %d\n", (int)zero.size() + (int) pos.size(), (int) neg.size());
        }
        else
        {
            printf("%d %d\n", (int) zero.size() + (int) neg.size(), (int) pos.size());
        }
    }
}