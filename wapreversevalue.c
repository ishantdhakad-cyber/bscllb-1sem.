#include<stdio.h>
void main(){
    int n,res=0,digit ;
    scanf("%d",&n);
    while(n>0)
    {
        digit = n%10;
        res=res*10+digit;
        n=n/10;
    }
    printf("%d",res);
}