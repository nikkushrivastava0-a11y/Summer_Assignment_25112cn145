#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 2, 4};
    int target = 2, count = 0;
    for(int i = 0; i < 6; i++) {
        if(arr[i] == target) count++;
    }
    printf("Frequency of %d is %d\n", target, count);
    return 0;
}