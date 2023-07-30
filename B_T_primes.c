#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
       int x;
       int count = 0;
       scanf("%d", &x);
       for (int i = 1; i <= x; i++)
       {
            if (x % i == 0)
            {
                count++;
            }
       }
       if (count == 3)
       {
            printf("YES\n");
       }
       else
       {
            printf("NO\n");
       }
       
    }
    return 0;
}