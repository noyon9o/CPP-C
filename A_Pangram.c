#include <stdio.h>
#include <string.h>
int main() 
{
    int n, i, j;
    int alphabet[26] = {0};
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for (i = 0; i < n; i++) 
    {
        if (s[i] >= 'a' && s[i] <= 'z') 
        {
            j = s[i] - 'a';
            alphabet[j]++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            j = s[i] - 'A';
            alphabet[j]++;
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}