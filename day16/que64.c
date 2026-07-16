#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7, j = 0;
    int temp[7];
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] != arr[i + 1]) temp[j++] = arr[i];
    }
    temp[j++] = arr[n - 1];
    printf("Array after removing duplicates: ");
    for(int i = 0; i < j; i++) printf("%d ", temp[i]);
    return 0;
}