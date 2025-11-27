#include<stdio.h>

int main(){
    int n, d, sum=0;

    printf("Enter number ");
    scanf("%d", &n);

    while(n> 0){
        d= n % 10;
        sum= sum + d;
        n= n/10;

    }
    printf("The sum of digits is %d", sum);

    getchar();
    getchar();

    return 0;

}