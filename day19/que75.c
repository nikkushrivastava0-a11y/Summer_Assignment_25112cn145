#include <stdio.h>
int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}}, trans[3][2];
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            trans[j][i] = a[i][j];
    printf("Transpose:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}