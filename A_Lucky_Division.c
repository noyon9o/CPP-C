#include <stdio.h>

int is_lucky(int n) 
{
    while (n > 0) 
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7) 
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() 
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        if (n % i == 0 && is_lucky(i)) 
        {
            printf("YES\n");
            return 0;
        }
    }   
    printf("NO\n");
    return 0;
}