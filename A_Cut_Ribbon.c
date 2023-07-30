#include<stdio.h>
int main()
{
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    if ((a+b+c)/3 == n)
    {
        printf("1");
    }
    else if (b + c == n)
    {
        printf("2");
    }
    else if (a + b + c == n)
    {
        printf("3");
    }
    else if (a + c == n)
    {
        printf("2");
    }
    else if (a + b == n)
    {
        printf("2");
    }
    
    return 0;
}