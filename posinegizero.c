#include<stdio.h>
void main()
{
    int number;
    printf("enter a number");
    scanf("&d",&number);
    if(number>0)
    {
        printf("the number is positive");
    }
    else if(number<0)
    {
        printf("the number is negative");
    }
    else if(number==0)
    {
        printf("the number is zero");
    }
}