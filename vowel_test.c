#include<stdio.h>
#include<string.h>
int main()
{
    int t, count = 0;
    char str[1001];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf(" %[^\n]", str);
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] == 'a' || str[j] == 'e' ||
            str[j] == 'i' || str[j] == 'o' ||
            str[j] == 'u')
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}