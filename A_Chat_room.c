#include<stdio.h>
#include<string.h>
int main()
{
    int i, j = 0, f = 0;
    char s[100], a[6] = "hello";
    scanf("%s", s);
    for (i = 0; i < 5; i++)
    {
        while (s[j] != '\0')
        {
            if (a[i] == s[j])
            {
                f++;
                j++;
                break;
            }
            else
            j++;
        }
    }
    if (f == 5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}