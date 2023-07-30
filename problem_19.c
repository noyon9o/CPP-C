#include<stdio.h>
#include<string.h>
int main()
{
    int t, count = 0;
    char s[10001];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%[^\n]", s);
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] == ' ')
            {
                count++;
            }
            printf("%d", count+1);
        }
        
    }
    return 0;
}