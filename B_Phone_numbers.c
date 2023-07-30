#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    char s[t];
    scanf("%s", s);

    for (int i = 0; i < t; i++)
    {
        printf("%c", s[i]);
        if (i % 2 && i < t-(t%2)-2)
        {
            printf("-");
        }
    }
    //printf("%s", s);
    return 0;
}