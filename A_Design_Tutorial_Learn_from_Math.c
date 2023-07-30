#include<stdio.h>
int main()
{
    int a, cnt = 0;
    scanf("%d", &a);
    for (int i = 2; i < a; i++)
    {
        if (i % a != 0)
        {
            cnt++;
        }
        
    }
    if (cnt == 1)
    {
        printf("Its prime");
    }
    else
    printf("Its not prime.");

    return 0;
}