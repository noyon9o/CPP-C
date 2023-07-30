#include<stdio.h>
#include<string.h>
int main()
{
    int t, count = 0;
    char first_line[10001];
    char secend_line[2];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%[^\n]", first_line);
        scanf("%s", secend_line);
        for (int j = 0; j < strlen(first_line); j++)
        {
            if (secend_line[0] == first_line[j])
            {
                count++;
            }
            printf("Occourence of '%c' in '%s' = %d\n", secend_line[0],first_line, count);
        }
        
    }
    return 0;
}