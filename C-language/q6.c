#include <stdio.h>
int main(){
    int a,b;
    printf("Enter 2 numbers ");
    scanf("%d %d", &a, &b);

    int c;
    c=a;
    a=b;
    b=c;

    printf("The numbers are %d \n %d ", a, b);
    
    getchar();
    getchar();

    return 0;
}