#include<stdio.h>
void main()
{
    int n,i,res=1;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        res=res*i;
    }
        printf("factorial of %d is %d \n",n,res);
}
