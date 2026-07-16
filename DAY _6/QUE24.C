#include <stdio.h>

long long customPower(int x, int n) {
    long long result = 1;
    
    // Multiply x by itself n times
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int base = 2;
    int exp = 10;
    printf("%d raised to the power %d is: %lld\n", base, exp, customPower(base, exp));
    return 0;
}
