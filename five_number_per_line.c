#include<stdio.h>
int main()
{
    int n = 1000;
    for(int i = n; i >= 1; i--)
    {
        if (i % 5 == 0)
        {
            printf("\n");
        }
        
        printf("%d\t", i);
    }
    return 0;
}