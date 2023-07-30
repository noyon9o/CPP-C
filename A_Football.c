#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char team1[11], team2[11];
    scanf("%s", team1);

    int count1 = 1, count2 = 0;
    for (int i = 1; i < n; i++)
    {
        char team[11];
        scanf("%s", team);

        if (strcmp(team, team1) == 0)
        {
            count1++;
        }
        else
        {
            strcpy(team2, team);
            count2++;
        }
    }

    if (count1 > count2)
    {
        printf("%s\n", team1);
    }
    else
    {
        printf("%s\n", team2);
    }

    return 0;
}
