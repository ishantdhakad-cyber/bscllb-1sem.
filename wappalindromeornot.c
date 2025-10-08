#include<stdio.h>
void main (){
    int n,i,res;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        res=res*i;
    }
    printf("factorial of %d is %d",n,res);
}