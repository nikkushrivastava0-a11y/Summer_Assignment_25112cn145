#include <stdio.h>

int main() {
    int a[] = {10, 20, 30}, b[] = {30, 40, 50};
    printf("Common: ");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(a[i] == b[j]) printf("%d ", a[i]);
        }
    }
    return 0;
}