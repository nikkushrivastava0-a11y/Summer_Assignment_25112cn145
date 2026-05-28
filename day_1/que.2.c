#include<stdio.h>
int main(){
    int n,i,multiplication;
    printf("enter a number whose table is to be printed ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        multiplication = (n*i);
        printf("%d * %d = %d\n",n,i,multiplication);
    }
    return 0;
}