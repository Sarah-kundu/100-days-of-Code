#include <stdio.h>

int main() {

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    int sum;
    sum=a+b;

    printf("The sum is %d", sum);

    getchar();
    getchar();

    return 0;
}