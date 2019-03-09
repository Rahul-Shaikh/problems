#include <stdio.h>

int main(int argc, char *argv[])
{
    for(int i = 1;i <= 30;i++)
    {
        int flag = 0;
        for(int j = 1;j < i;j++)
        {
            for(int k = 0;k < j;k++)
            {
                if ((i*i)==((k*k)+(j*j)))
                {
                    printf("(%d, %d, %d)\n", k, j, i);
                    flag = 1;
                }
            }
            if (flag == 1) break;
        }
    }
}