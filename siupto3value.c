#include<stdio.h>
void main () {
    float p,r,t,si;
    int i;
    for(i = 1; i <= 3; i++)
    {
        printf("enter the p,r,t for set %d", i);
        scanf("%f %f %f", &p, &r, &t);
        si = (p * r * t )/100;
        printf("simple Interest for set %d =%2.f \n", i,si);
    }
}