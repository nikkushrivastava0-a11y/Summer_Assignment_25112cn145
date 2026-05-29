#include<stdio.h>
int main(){
    int i, rev =0;
    printf("enter a number whose reverse is to be printed");
    scanf("%d",&i);
    while(i>0){
        rev = rev*10+i%10;
        i = i/10;
    }
    printf("the reverse of number is %d", rev);
    return 0;

}