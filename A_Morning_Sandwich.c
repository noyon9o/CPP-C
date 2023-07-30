#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int b, c, h;
        scanf("%d %d %d", &b, &c, &h);
        if(b == c+h)
        {
            printf("%d\n",b+1);
        }
        else if(b > c+h)
        {
            printf("%d\n", c+h+c+h+1);
        }
        else if(b < c+h)
        {
            printf("%d\n", b+(b-1));
        }
    }
    return 0;
}