#include <stdio.h>
int main() {
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    int sum, diff, prod, quo;
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quo=a/b;
    
    printf("The sum is %d \n ", sum);
    printf("The difference is %d \n", diff);
    printf("The product is %d \n", prod);
    printf("The quotient is %d \n", quo);


    getchar();
    getchar();

    return 0;
}