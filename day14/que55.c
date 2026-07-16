#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {10, 5, 20, 8, 12};
    int first = INT_MIN, second = INT_MIN;
    for(int i = 0; i < 5; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    printf("Second largest is %d\n", second);
    return 0;
}