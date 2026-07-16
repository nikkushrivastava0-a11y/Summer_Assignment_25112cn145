#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12}, n = 5, pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) arr[pos++] = arr[i];
    }
    while (pos < n) arr[pos++] = 0;
    printf("Zeros moved: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}