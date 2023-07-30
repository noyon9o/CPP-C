#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    int count[26] = {0};
    int distinct = 0;

    scanf("%[^\n]", s);
    int len = strlen(s);
    for (int i = 1; i < len-1; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int index = s[i] - 'a';
            if (count[index] == 0)
            {
                count[index] = 1;
                distinct++;
            }
        }
    }

    printf("%d\n", distinct);

    return 0;
}
