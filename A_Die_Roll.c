#include <stdio.h>


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int y, w;
    scanf("%d %d", &y, &w);

    int maxRoll = (y > w) ? y : w;
    int numerator = 7 - maxRoll;   
    int denominator = 6;   

    int gcdValue = gcd(numerator, denominator);
    numerator /= gcdValue;
    denominator /= gcdValue;

    printf("%d/%d\n", numerator, denominator);

    return 0;
}
