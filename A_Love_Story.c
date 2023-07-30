#include<stdio.h>
#include<string.h>
int main()
{
    int t, count = 0;
    char s[11];
    scanf("%d", &t);
    char temp[] = "codeforces";
    for (int i = 0; i < t; i++)
    {
        scanf("%s", s);
        
        for (int j = 0; j < 10; j++)
        {
            if (s[j] != temp[j])
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}