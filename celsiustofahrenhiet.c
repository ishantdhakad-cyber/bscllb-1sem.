#include<stdio.h>
void main(){
    float c, fa;
    printf("enter tempreature in celsius");
    scanf("%f",&c);
    fa=(c*9/5)+32;
    printf("%.2f c=%.2f fa\n",c,fa);
}