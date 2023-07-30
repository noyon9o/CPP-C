#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[35];
} User;

int findUserIndex(User* users, int size, char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(users[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

void registerUser(User* users, int size, char* name) {
    int index = findUserIndex(users, size, name);
    if (index == -1) {
        printf("OK\n");
        strcpy(users[size].name, name);
    } else {
        int i = 1;
        char prompt[35];
        while (1) {
            sprintf(prompt, "%s%d", name, i);
            if (findUserIndex(users, size, prompt) == -1) {
                printf("%s\n", prompt);
                strcpy(users[size].name, prompt);
                break;
            }
            i++;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    User* users = malloc(n * sizeof(User));

    for (int i = 0; i < n; i++) {
        char name[35];
        scanf("%s", name);
        registerUser(users, i, name);
    }

    free(users);

    return 0;
}