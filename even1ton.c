#include<stdio.h>
void main(){
    int i,n;
    printf("enter the value of n");
    scanf("%d", &n);
    for(i>=1; i<=n; i++)
    {
        if(n %2== 0){
            printf("even");
        }
        else{
            printf("odd");
        }
        
    }
}