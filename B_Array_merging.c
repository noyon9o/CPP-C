#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], tt[2*n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            scanf("%d", &b[i]);
        }
        
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", b[i]);
        }
        
        
    }
    return 0;
}