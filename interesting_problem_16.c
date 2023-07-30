#include<stdio.h>
#include<string.h>
void printreverse(char str[])
{
    int i;
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
int main()
{
    int i, j, k, t, s_len;
    char s[1002], word[1002];

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%[^\n]", s);
        s_len = strlen(s);
        for (j = 0, k = 0; j < s_len; j++)
        {
            if (s[j] != ' ')
            {
                word[k] = s[j];
                k++;
            }
            else if (k > 0)
            {
                word[k] = '\0';
                // printf("%s\n", word);
                printreverse(word);
                k = 0;
            }
        }
        if (k > 0)
        {
            word[k] = '\0';
            // printf("%s\n", word);
            printreverse(word);
        }
    }
    return 0;
}

