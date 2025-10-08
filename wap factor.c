#include<stdio.h>
void main(){
    int n,i,count=0;
    printf("enter the number");
    scanf("%d",&n);
    printf("factor of %d are :\n", n);
    for(int i=1;i<=n;i++);
    {
        if(n%i==0)
        {
            printf("%d",i);
            count++;
        }
    }
    printf("\n total number of factors: %d\n", count);
}