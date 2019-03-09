#include <iostream>
#include <vector>

#define fori(s, n) for (int i = s; i < n; i++)
#define forj(s, n) for (int j = s; j < n; j++)
typedef long long ll;
using namespace std;
int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        char str[n][1001];
        vector<vector<int> > vow(n, vector<int> (5, 0));
        while(getchar() != '\n');
        fori(0, n) 
        {
            int k = 0;
            char c = getchar();
            while (c != '\n')
            {
                if (c == 'a') vow[i][0] = 1;
                if (c == 'e') vow[i][1] = 1;
                if (c == 'i') vow[i][2] = 1;
                if (c == 'o') vow[i][3] = 1;
                if (c == 'u') vow[i][4] = 1;
                str[i][k++] = c;
                c = getchar();
                if (c == '\n') str[i][k++] = '\0';
            }
        }
        int ans = 0;
        fori(0, n)
        {
            forj(0, n)
            {
                if (i == j) continue;
                if ((vow[i][0]+vow[j][0] > 0) && (vow[i][1]+vow[j][1] > 0) &&(vow[i][2]+vow[j][2] > 0)&&(vow[i][3]+vow[j][3] > 0) && (vow[i][4]+vow[j][4] > 0)) ans++;
            }
        }
        printf("%d\n", ans/2);
    }
}