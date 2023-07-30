#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char snake[n][m];

    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            snake[i][j] = '.';
        }
    }

    for (i = 0; i < n; i += 2) {
        for (j = 0; j < m; j++) {
            snake[i][j] = '#';
        }
    }

    for (i = 1; i < n; i += 4) {
        snake[i][m - 1] = '#';
    }

    for (i = 3; i < n; i += 4) {
        snake[i][0] = '#';
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%c", snake[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     char a[m];
//     char s[1] = "#";
//     char s1[1] = ".";
//     for (int i = 0; i < m; i++)
//     {
//         a[i] = s[0];
//         a[m] = '\0';
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%s\n", a);
//         }
//         if (i % 2 != 0)
//         {
//             for (int j = 0; j < m; i++)
//             {
//                 a[i]
//             }
            
//         }
        
        
//     }
    
//     //printf("%s", a);

//     return 0;
// }