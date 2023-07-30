#include<stdio.h>
#include<string.h>
int main()
{
    int t, k, count = 0;
    scanf("%d", &t);
    char a[101];
    while (t--)
    {
        scanf("%s",a);
        int i;
        int n = strlen(a);
        for (i=0;i<n;i++)
        {
            if ((a[i] != a[0]) && (i != n/2))
            {
                printf("YES\n");
                break;
            }
        }
        if (i == n)
        {
            printf("NO\n");
        }
    }
    return 0;
}