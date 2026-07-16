#include <stdio.h>

void decimalToBinary(int n) {
    int binaryNum[32];
    int i = 0;
    
    if (n == 0) {
        printf("0");
        return;
    }
     while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
    int num = 25;
    printf("Binary of %d is: ", num);
    decimalToBinary(num);
    return 0;
}