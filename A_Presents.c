#include<stdio.h>
int main()
{
    int n, temp, i;
    scanf("%d", &n);
    int a[n];
    for (i = 1; i <= n; i++)
    {
        /* code */
        scanf("%d", &temp);
        a[temp] = i;
    }
    for (i = 1; i <= n; i++)
    {
        /* code */
        printf("%d ", a[i]);
    }
    
    return 0;
}