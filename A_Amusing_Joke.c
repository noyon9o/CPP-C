#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    char b[101];
    char c[101];

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    int alen = strlen(a);
    int blen = strlen(b);
    int clen = strlen(c);

    if (alen + blen != clen) {
        printf("NO\n");
        return 0;
    }

    strcat(a, b);

    for (int i = 0; i < alen + blen - 1; i++) {
        for (int j = 0; j < alen + blen - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                char temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < clen - 1; i++) {
        for (int j = 0; j < clen - i - 1; j++) {
            if (c[j] > c[j + 1]) {
                char temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    if (strcmp(a, c) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[101];
//     char b[101];
//     char c[101];

//     scanf("%s", a);
//     scanf("%s", b);
//     scanf("%s", c);

//     int alen = strlen(a);
//     int blen = strlen(b);
//     int clen = strlen(c);

//     for (int i = 0; i < alen+blen; i++)
//     {
//         a[alen+i] = b[i];
//     }
//     int  aalen = strlen(a);
    
//     for (int i = 0; i < aalen-1; i++)
//     {
//         for (int j = 0; j < aalen - i - 1; j++)
//         {
//             if (a[j] > a[j+1])
//             {
//                 char temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < clen-1; i++)
//     {
//         for (int j = 0; j < clen - i - 1; j++)
//         {
//             if (c[j] > c[j+1])
//             {
//                 char temp = c[j];
//                 c[j] = c[j+1];
//                 c[j+1] = temp;
//             }
//         }
//     }
//     int count = 0;
//     for (int i = 0; i < aalen; i++)
//     {
//         if (aalen == clen)
//         {
//             if (a[i] == c[i])
//             {
//                 count++;
            
//             }
//         }
//         if (count == aalen)
//         {
//             printf("YES\n");
//             break;
//         }
//         else
//         {
//             printf("NO\n");
//             break;
//         }
//     }

//     //printf("%s\n", a);
//     //printf("%s\n", b);
//     //printf("%s\n", c);

//     return 0;
// }
