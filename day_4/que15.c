#include <stdio.h>

int main() {
    int n, r, s = 0, t;
    printf("Enter number: ");
    scanf("%d", &n);
    
    t = n;
    while (t > 0) {
        r = t % 10;
        s += r * r * r;
        t /= 10;
    }
    
    if (s == n) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    
    return 0;
}