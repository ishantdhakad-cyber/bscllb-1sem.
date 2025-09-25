#include<stdio.h>
void main(){
    int n,i,pr=1;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n<=1)
    {
        pr=0;
    }
    else{
        for(i=2;i<=n/2;i++)
        {
            pr=0;
            break;
        }
    }
    if(pr)
    {
        printf("%d is a prime number \n",n);
    }
    else{
        printf("%d is not a prime number \n",n);
    }

}
