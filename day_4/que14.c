#include <stdio.h>

int main() {
    int n, x = 0, y = 1, z = 0;
    
    printf("Enter the position (n) to find the nth Fibonacci term: ");
    scanf("%d", &n);
    
    
    if (n <= 0) {
        printf("Please enter a position greater than 0.\n");
        return 0;
    } else if (n == 1) {
        printf("The 1st Fibonacci term is: %d\n", x);
        return 0;
    } else if (n == 2) {
        printf("The 2nd Fibonacci term is: %d\n", y);
        return 0;
    }
    
   
    for (int i = 3; i <= n; i++) {
        z = x + y;
        x = y;
        y = z;
    }
    
    printf("The %dth Fibonacci term is: %d\n", n, y);
    
    return 0;
}