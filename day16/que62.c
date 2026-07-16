#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int n = 7, maxCount = 0, mostFrequent = arr[0];
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) count++;
        }
        if(count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    printf("Element with max frequency is %d\n", mostFrequent);
    return 0;
}