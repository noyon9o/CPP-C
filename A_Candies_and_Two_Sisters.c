#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
        if (n[i] == 0 || n[i] == 1)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", (n[i]-1) /2);
        }
    }
    
    return 0;
}