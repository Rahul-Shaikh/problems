#include <iostream>

using namespace std;

int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        char arr[9], c;
        c = getchar();
        for (int i = 0; i < 9; i++)
        {
            while (c=='\n')
            {
                c = getchar();
            }
            arr[i] = c;
            c=getchar();
        }
        int flag = 0;
        for (int i = 0; i < 5; i++)
        {
            if (i == 2) continue;
            if (arr[i]=='l' && arr[i+3]=='l' && arr[i+4]=='l')
            {
                flag = 1;
                printf("yes\n");
                break;
            }
        }
        if (!flag) printf("no\n");
    }
}