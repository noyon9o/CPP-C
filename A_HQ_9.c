#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int p = 0;
    for (int  i = 0; i < strlen(s); i++)
    {
        /* code */
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            p = 1;
            break;
        }
        else if( s[i] == '+')
        {

        }
    }
    if (p)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

