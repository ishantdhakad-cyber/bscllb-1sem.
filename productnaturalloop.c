#include<stdio.h>
void main(){
    int n,i,product=1;
    printf("enter the value of n");
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++)
    product=product*i;
    printf("Product=%d", product);
}