#include <stdio.h>
#include <string.h>

char originalChar(char c, char shift)
{
    char keyboard[3][13] = {
        "qwertyuiop",
        "asdfghjkl;",
        "zxcvbnm,./"};

    char shiftedKeyboard[3][13] = {
        "wertyuiop[",
        "sdfghjkl;'",
        "xcvbnm,./"};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if (shift == 'R')
            {
                if (shiftedKeyboard[i][j] == c)
                {
                    return keyboard[i][j];
                }
            }
            else if (shift == 'L')
            {
                if (keyboard[i][j] == c)
                {
                    return shiftedKeyboard[i][j];
                }
            }
        }
    }
    return c;
}

int main()
{
    char c;
    scanf("%c\n", &c);
    char s[101];
    scanf("%s", s);

    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        char original = originalChar(s[i], c);
        printf("%c", original);
    }

    return 0;
}
