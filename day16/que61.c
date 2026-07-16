#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5}; // 3 is missing
    int n = 5; // Expected range 1 to 5
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for(int i = 0; i < n - 1; i++) actualSum += arr[i];
    printf("Missing number is: %d\n", expectedSum - actualSum);
    return 0;
}