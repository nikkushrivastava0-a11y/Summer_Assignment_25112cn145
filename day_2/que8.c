#include <stdio.h>

int main() {
    int i, x, rev = 0;
    
    printf("enter a number whose palindrome is to be checked \n");
    scanf("%d", &i);
    
    x = i; 
    
    while (i > 0) {
        rev = rev * 10 + i % 10;
        i = i / 10;
    }
    
    if (rev == x) {
        printf("given number is palindrome\n");
    } 
    else {
        printf("number is not palindrome\n");
    }
    
    return 0;
}