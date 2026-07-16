#include <stdio.h>

int main() {
    int arr[] = {12, 11, 13, 5, 6}, n = 5;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Descending check
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Descending: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}