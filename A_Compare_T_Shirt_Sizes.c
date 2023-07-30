#include <stdio.h>
#include <string.h>

// compare two T-shirt sizes
int compareSizes(char a[], char b[]) {
    // get the sizes of a and b
    int size_a = strlen(a);
    int size_b = strlen(b);

    // check if a and b are the same size
    if (size_a == size_b && strcmp(a, b) == 0) {
        return 0;
    }

    // check if a and b are different sizes
    if (size_a != size_b) {
        if (strcmp(a, "M") == 0) {
            return -1;
        }
        if (strcmp(b, "M") == 0) {
            return 1;
        }
        if (strcmp(a, "S") == 0 || strcmp(b, "L") == 0) {
            return -1;
        }
        if (strcmp(a, "L") == 0 || strcmp(b, "S") == 0) {
            return 1;
        }
    }

    // check if a and b are both X sizes
    if (a[size_a - 1] == 'S' && b[size_b - 1] == 'S') {
        int i = size_a - 2;
        int j = size_b - 2;
        while (i >= 0 && a[i] == 'X') {
            i--;
        }
        while (j >= 0 && b[j] == 'X') {
            j--;
        }
        if (i > j) {
            return 1;
        }
        if (i < j) {
            return -1;
        }
    }

    // check if a and b are both X sizes
    if (a[size_a - 1] == 'L' && b[size_b - 1] == 'L') {
        int i = size_a - 2;
        int j = size_b - 2;
        while (i >= 0 && a[i] == 'X') {
            i--;
        }
        while (j >= 0 && b[j] == 'X') {
            j--;
        }
        if (i > j) {
            return -1;
        }
        if (i < j) {
            return 1;
        }
    }

    // a and b are the same size
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char a[51], b[51];
        scanf("%s %s", a, b);
        int result = compareSizes(a, b);
        if (result < 0) {
            printf("<\n");
        } else if (result > 0) {
            printf(">\n");
        } else {
            printf("=\n");
        }
    }
    return 0;
}