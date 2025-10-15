#include<stdio.h>
void main(){
    float marks[6];
    int i,sum;
    for(i=0;i<=5;i++)
    {
        printf("enter %d element",i+1);
        scanf("%f",&marks[i]);
    }
        for(i=0;i<=5;i++)
        {
            sum = sum+marks[i];
            printf("marks of %d subject \n", marks[i]);
        }
            printf("Sum=%f",sum);

}