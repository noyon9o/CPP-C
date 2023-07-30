#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char word[101];
    int i, n;
    scanf("%s", word);
    n = strlen(word);
    // check if the word needs to be changed
    int all_upper = 1, all_except_first_upper = 1;
    for (i = 0; i < n; i++) 
    {
        if (!isupper(word[i])) 
        {
            all_upper = 0;
        }
        if (i > 0 && !isupper(word[i])) 
        {
            all_except_first_upper = 0;
        }
    }

    // change the case of the word if needed
    if (all_upper || all_except_first_upper) 
    {
        for (i = 0; i < n; i++) 
        {
            if (isupper(word[i])) 
            {
                word[i] = tolower(word[i]);
            }
            else 
            {
                word[i] = toupper(word[i]);
            }
        }
    }
    printf("%s\n", word);
    return 0;
}

