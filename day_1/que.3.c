#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("enter a number whose factorial is to be printed");
    scanf("%d",&n);
    if(n<0){
        printf("factorial not possible");

    }
    else if(n == 0 || n == 1){
        printf("factorial is 1");
    }
    else{
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
            printf("the factorial of number is %d\n",fact);
    }
        
        return 0;
    }
