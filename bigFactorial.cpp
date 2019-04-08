#include <iostream>

using namespace std;

int main(void)
{
    int arr[1000];
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    arr[0] = 1;
    int len = 1;
    for(int i = 2; i <= n; i++)
    {
        int carry = 0;
        for (int j = 0; j < len; j++)
        {
            int mul = arr[j]*i + carry;
            arr[j] = mul % 10;
            carry = mul / 10;
        }

        while (carry)
        {
            len ++;
            arr[len - 1] = carry % 10;
            carry /= 10;
        }
    }
    printf("The factorial of the number is :\n");
    for(int i = len -1; i >= 0; i --) printf("%d", arr[i]);
    printf("\n");
}