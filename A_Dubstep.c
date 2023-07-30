#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i = i+2;
            printf(" ");
            
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    return 0;
}