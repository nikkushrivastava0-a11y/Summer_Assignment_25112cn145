#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0, i;
    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Sum: %d, Average: %.2f\n", sum, (float)sum/5);
    return 0;
}