#include<stdio.h>
int main()
{
    int n;
    double sum = 0.0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum = sum + a[i];
    }
    printf("%lf", sum/n);
    
    return 0;
}