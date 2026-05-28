#include<stdio.h>
int main() {
    int n,sum;
    printf("ENTER A NUMBER WHOSE SUM IS TO BE PRINTED");
    scanf("%d",&n);
    if(n<1){
        printf("error  we are not going to find its sum because it is not natural number");

    }
    else{
        sum=(n*(n+1))/2;
        printf("the sum of first%d  numbers is: %d\n ", n,sum);
        return 0;
    }

}