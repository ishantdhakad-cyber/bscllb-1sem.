#include <stdio.h>
int main() {
    float principal = 100;
    float rate = 8;
    float time = 3;
    float simpleinterest;
    simpleinterest = (principal * rate * time )/100;
    
    printf("Principal = %.2f\n",principal);
    printf("Rate = %.2f\n",rate);
    printf("Time = %.2f\n",time);
    printf("Simple Interest = %.2f\n",simpleinterest);
}
