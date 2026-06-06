#include <stdio.h>

int main() {
    int n1, n2, temp1, temp2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    temp1 = n1;
    temp2 = n2;

    while (temp1 != temp2) {
        if (temp1 > temp2) {
            temp1 = temp1 - temp2;
        } else {
            temp2 = temp2 - temp1;
        }
    }

    int gcd = temp1;
    int lcm = (n1 * n2) / gcd;

    printf("LCM is: %d\n", lcm);

    return 0;
}