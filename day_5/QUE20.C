#include <stdio.h>

int main() {
    int num, largest = -1;
    printf("Enter a number: ");
    scanf("%d", &num);

    int div = 2;
    while (num > 1) {
        if (num % div == 0) {
            largest = div;
            num /= div;
        } else {
            div++;
        }
    }

    printf("The largest prime factor is: %d\n", largest);

    return 0;
}