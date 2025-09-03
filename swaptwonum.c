#include<stdio.h>
void main(){
    int a,b,t;
    printf("enter two value");
    scanf("%d",&a);
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("a=%d \t b=%d",a,b);
}