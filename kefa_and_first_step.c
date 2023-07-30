#include<stdio.h>
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        if (a[i] <= a[i+1])
        {
            c++;
        }
        if (a[i] > a[i+1])
        {
            c = 0;
        }
    }
    printf("%d", c);
    return 0;
}