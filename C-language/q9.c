#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t,SI,CI;

    printf("Principle: \n Rate: \n Time: ");
    scanf("%f %f %f", &p, &r, &t);

    SI=(p * r * t) / 100;
    CI=p * (pow((1 + r / 100), t)) - p;

    printf("The simple interest is %f\n The compound interest is %f", SI, CI);

    getchar();
    getchar();

    return 0;
    
}