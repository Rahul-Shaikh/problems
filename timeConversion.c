#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//need to get the input
char* timeConversion(char* s) {
    int n = strlen(s);
    if (s[n-2] == 'A')
    {
        char temp[4];
        for (int i = 0; i <2 ;i++) temp[i] = s[i];
        temp[2] = ' ';
        char *pend;
        int n1 = strtol(temp, &pend, 10);
        if (n1==12) 
        {
            for (int i = 0; i<2; i++) temp[i] = '0';
        }
        for (int i = 0; i <2 ;i++) s[i] = temp[i];
        s[n-2] = '\0';
        return s;
    }
    else if (s[n-2] == 'P')
    {
        char temp[4];
        for (int i = 0; i <2 ;i++) temp[i] = s[i];
        temp[2] = ' ';
        char *pend;
        int n1 = strtol(temp, &pend, 10);
        if (n1==12) 
        {
            for (int i = 0; i<2; i++) temp[i] = 48+i+1;
        }
        else 
        {
            n1 += 12;
            sprintf(temp, "%d", n1);
        }
        for (int i = 0; i <2 ;i++) s[i] = temp[i];
        s[n-2] = '\0';
        return s;
    }
}
int main(int argc, char const *argv[])
{
    char s1[] = "06:29:20AM";
    char s2[] = "06:29:20PM";
    printf("%s\n%s\n", timeConversion(s1),timeConversion(s2));
    return 0;
}
