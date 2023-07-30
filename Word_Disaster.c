#include<stdio.h>
#include<string.h>
void print_rev(char str[])
{
    int i;
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
int main()
{
    int t,i,j,k;
    scanf("%d", &t);
    char s[1002], word[1002];
    for (i = 0; i < t; i++)
    {
        scanf(" %[^\n]", s);
        for (j = 0,k = 0; j < strlen(s); j++)
        {
            if (s[j] != ' ')
            {
                word[k] = s[j];
                k++;
            }
            else if (k > 0)
            {
                word[k] = '\0';
                print_rev(word);
                k = 0;
            }
        }
        if (k > 0)
        {
            word[k] = '\0';
            print_rev(word);
        }
    }
    return 0;
}