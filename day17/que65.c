#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3}, n1 = 3;
    int arr2[] = {4, 5, 6}, n2 = 3;
    int merged[6], i;
    for(i = 0; i < n1; i++) merged[i] = arr1[i];
    for(i = 0; i < n2; i++) merged[n1 + i] = arr2[i];
    printf("Merged: ");
    for(i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);
    return 0;
}