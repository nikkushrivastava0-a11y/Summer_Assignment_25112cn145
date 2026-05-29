#include <stdio.h>

int main() {
    int n, remainder, product = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n == 0) {
        product = 0;
    }

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        remainder = n % 10;
        product = product * remainder;
        n = n / 10;
    }

    printf("Product of digits = %d\n", product);
    return 0;
}