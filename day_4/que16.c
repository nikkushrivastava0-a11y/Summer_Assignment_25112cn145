#include <stdio.h>

int main() {
    int l, h, i, t, r, s;
    printf("Enter range: ");
    scanf("%d %d", &l, &h);
    
    for (i = l; i <= h; i++) {
        t = i;
        s = 0;
        while (t > 0) {
            r = t % 10;
            s += r * r * r;
            t /= 10;
        }
        if (s == i) printf("%d ", i);
    }
    return 0;
}