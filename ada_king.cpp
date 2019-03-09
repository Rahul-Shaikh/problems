#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int r, c, k, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d", &r, &c, &k);
        printf("%d\n", (min(8, r+k)-max(1, r-k)+1)*(min(8, c+k)-max(1, c-k)+1));
    }
}