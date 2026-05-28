#include<stdio.h>
int main (){
    int n,count=0,temp;
    printf("ENTER THE NUMBER WHOSE DIGITS IS TO BE COUNTED");
    scanf("%d",&n);
    temp=n;
    while(n>0){

    
    n = n / 10;
    count++;
    }
    printf("the digits of %d is %d\n",temp , count);
    return 0;
}