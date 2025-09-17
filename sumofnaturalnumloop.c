#include<stdio.h>
void main (){
    int i,n,sum;
    printf("enter the value n");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    sum = sum+i;
    printf("Sum:%d", sum );
}