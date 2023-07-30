#include<stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
        {
           printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}