#include<stdio.h>
#include<string.h>
int main()
{
    char s[201];
    scanf("%s", s);
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '.')
        {
            printf("0");
        }
        else if (s[i] == '-' && s[i+1] == '.')
        {
            printf("1");
            i++;
        }
        else
        {
            printf("2");
            i++;
        }
    }

    return 0;
}