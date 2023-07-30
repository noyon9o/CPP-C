#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    char s[t];
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        scanf("%s", s);
        if (strcmp(s, "Tetrahedron") == 0)
        {
            /* code */
            count += 4;
        }
        else if (strcmp(s, "Cube") == 0)
        {
            /* code */
            count += 6;
        }
        else if (strcmp(s, "Octahedron") == 0)
        {
            /* code */
            count += 8;
        }
        else if (strcmp(s, "Dodecahedron") == 0)
        {
            /* code */
            count += 12;
        }
        else if (strcmp(s, "Icosahedron") == 0)
        {
            /* code */
            count += 20;
        }
    }
    printf("%d", count);
    
    
    return 0;
}