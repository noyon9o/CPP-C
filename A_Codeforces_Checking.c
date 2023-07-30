#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        char ch;
        scanf("%c", ch);
        if (ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'r' || ch == 's')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}