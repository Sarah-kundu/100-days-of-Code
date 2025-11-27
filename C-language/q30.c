#include<stdio.h>

int main() {
    int num, rev=0, digit;

    printf("The number is : ");
    scanf("%d", &num);

    while (num!=0){
        digit= num % 10;
        rev= rev * 10 + digit;
        num= num/10;

    }
    printf("The reverse of number: %d", rev);

    getchar();
    getchar();

    return 0;

}