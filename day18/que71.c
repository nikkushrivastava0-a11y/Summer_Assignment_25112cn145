#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = 5, target = 10, low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            printf("Found at index %d\n", mid);
            return 0;
        }
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    printf("Not found\n");
    return 0;
}