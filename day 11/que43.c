#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 7;
    printf("%d is %s\n", num, checkPrime(num) ? "Prime" : "Not Prime");
    return 0;
}