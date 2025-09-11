#include<stdio.h>
void main(){
    int a;
    printf("enter the value a");
    scanf(" %d",&a);
    if(a %3==0 && a%5==0)
    {
        printf("the value a is divisible by 3,5");
    }
    else {
        printf("the value a is not divisible by 3,5");
    }
}
