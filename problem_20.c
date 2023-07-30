#include<stdio.h>
#include<string.h>
int main()
{
    int t, i;
    char s[10002];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%[^\n]", s);
        printf("%s\n", s);
    }
    return 0;
}