#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        count = 1;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                count++;
                break;
            }
        }
    }

    if (count == 0) {
        printf("no is prime\n");
    } else {
        printf("NO is not prime\n");
    }

    return 0;
}