#include <stdio.h>

int main()
{
    int k, r;
    scanf("%d %d", &k, &r);

    int shovels = 1;
    int price = k;

    while (price % 10 != 0 && price % 10 != r)
    {
        shovels++;
        price += k;
    }

    printf("%d\n", shovels);

    return 0;
}
