#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int i = 0;
        while (i < n)
        {
            int start = i;
            printf("%c", s[i++]);
            while (s[i++] != s[start]){}
            
        }
        printf("\n");
    }
    return 0;
}