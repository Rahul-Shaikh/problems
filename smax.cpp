#include <iostream>
#include <cstdint>
using namespace std;

int main(void)
{
    uint32_t n;
    scanf("%d", &n);
    uint32_t arr[n];
    uint32_t smax, max;
    for (int i =0; i < n; i++) scanf("%d", &arr[i]);
    max = smax = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == max) continue;
        else if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] < max)
        {
            smax = arr[i];
        }
        else if (max == smax)
        {
            smax = arr[i];
        }
    }
    if (smax == max) smax = 0;
    printf("%d\n", smax);
}
