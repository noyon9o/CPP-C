#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    char s[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &s[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'C' || s[i][j] == 'M' || s[i][j] == 'Y' )
            {
                printf("#Color\n");
                return 0;
            }
        }
    }
    printf("#Black&White\n");
    return 0;
}
