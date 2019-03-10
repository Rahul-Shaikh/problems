#include <iostream>
#include <cstring>

typedef long long ll;
using namespace std;
int vowHashFunc(char *str, int n)
{
    int vowHash = 1;
    for (int i = 0; i != n; i++)
    {
        if (vowHash == 2310) return vowHash;
        else if (str[i] == 'a')
        {
            if (vowHash%2 != 0) vowHash *= 2;
        }
        else if (str[i] == 'e')
        {
            if (vowHash%3 != 0) vowHash *= 3;
        }
        else if (str[i] == 'i')
        {
            if (vowHash%5 != 0) vowHash *= 5;
        }
        else if (str[i] == 'o')
        {
            if (vowHash%7 != 0) vowHash *= 7;
        }
        else if (str[i] == 'u')
        {
            if (vowHash%11 != 0) vowHash *= 11;
        }
    }
    return vowHash;
}
int main(void)
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int n;
        scanf("%d", &n);
        char str[n][1003]; 
        int vowHash[n];
        int arr[2311] = {0};
        for (int i = 0; i < n; i++)
        {
            while (getchar() != '\n');
            scanf("%[^\n]s", str[i]);
            vowHash[i] = vowHashFunc(str[i], (int) strlen(str[i]));
            arr[vowHash[i]]++;
        }
        ll ans = 0;
        for (int i = 0; i < 2311; i++)
        {
            if (arr[i] == 0) continue;
            for (int j = 0; j < 2311; j++)
            {
                if (arr[j] == 0) continue;
                if (i== 2310 && j==2310) ans += arr[i] * (arr[i]-1);
                else if (j % (2310/i) == 0) ans += arr[i] * arr[j];
            }
        }
        printf("%lld\n", ans/2);
    }
}