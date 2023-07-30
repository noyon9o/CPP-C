#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char ss[100];
    scanf("%s", s);
    scanf("%s", ss);

    int i, j;
    for (i = 0, j = 0; i < strlen(s), j < strlen(ss); i++, j++)
    {
        if (s[i] == ss[j])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    

    return 0;
}