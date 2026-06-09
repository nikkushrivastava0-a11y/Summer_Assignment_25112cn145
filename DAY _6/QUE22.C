#include <stdio.h>
#include <string.h>

int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int base = 1; // 2^0
    int len = strlen(binary);
    
    
    for (int i = len - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base = base * 2; 
    }
    return decimal;
}

int main() {
    char binary[] = "11001";
    printf("Decimal of %s is: %d\n", binary, binaryToDecimal(binary));
    return 0;
}