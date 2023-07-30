#include<stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = ar[0];
    int min = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
            count++;
        }
        if (ar[i] < min)
        {
            min = ar[i];
            count++;
        }
    }
    printf("%d", count);

    return 0;
}