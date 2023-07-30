#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define forn(i, n) for (int i = 0; i < n; i++)

void sortString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char name[] = "Timur";
    sortString(name);

    int n;
    scanf("%d", &n);
    forn(i, n) {
        int m;
        scanf("%d", &m);
        char s[101];
        scanf("%s", s);
        sortString(s);
        if (strcmp(s, name) == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
