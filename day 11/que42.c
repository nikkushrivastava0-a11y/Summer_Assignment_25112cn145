#include <stdio.h>

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    printf("Max is: %d\n", findMax(x, y));
    return 0;
}