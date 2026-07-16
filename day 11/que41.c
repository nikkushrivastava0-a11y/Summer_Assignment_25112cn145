#include <stdio.h>

// Function to find sum of two numbers
int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    
    int result = findSum(num1, num2);
    
    printf("The sum of %d and %d is: %d\n", num1, num2, result);
    
    return 0;
}