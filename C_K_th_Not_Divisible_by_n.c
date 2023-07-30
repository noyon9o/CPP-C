#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int nn = (k-1) / (n - 1);
        printf("%d\n", k+nn);
        
    }
    return 0;
}