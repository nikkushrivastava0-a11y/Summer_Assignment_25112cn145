#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    

    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
        n = n / 2;
    }
    return count;
}

int main() {
    int num = 25;
    printf("Number of set bits in %d is: %d\n", num, countSetBits(num));
    return 0;
}