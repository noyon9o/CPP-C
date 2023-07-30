#include<stdio.h>
int main()
{
    int t, l;
    int a[3];
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[j]);
        }
        for (int k = 0; k < 3; k++)
        {
            if (a[k] > a[k+1])
            {
                int temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
        printf("%d\n", a[1]);
        
    }
    return 0;
}