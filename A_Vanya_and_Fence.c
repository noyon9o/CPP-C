#include<stdio.h>
int main()
{
    int n, h, count = 0, count1 = 0;
    scanf("%d %d", &n, &h);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (ar[i] <= h)
        {
            /* code */
            count++;
        }
        if ( ar[i] > h) 
        {
            count1 += 2;
        }
    }
    printf("%d", count+count1);

    return 0;
}