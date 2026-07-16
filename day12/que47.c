#include <stdio.h>

int getFibonacci(int n) {
    int a = 0, b = 1, next;
    if (n == 0) return a;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n = 6;
    printf("Fibonacci number at position %d is %d\n", n, getFibonacci(n));
    return 0;
}