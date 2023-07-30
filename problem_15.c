#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    int count[26];
    char s[1001];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%s", s);
        for (int j = 0; j < strlen(s); i++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                count[s[j]-'a']++;
            }
        }
        for ( i = 0; i < 26; i++)
            {
                if (count[i] != 0)
                {
                    printf("%c = %d\n",'a'+i,count[i]);
                }
            }
    }
    return 0;
}