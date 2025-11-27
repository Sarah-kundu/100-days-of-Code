#include<stdio.h>
int main(){
    int num, d, prod=1;
    printf("Enter number ");
    scanf("%d", &num);

    while (num>0){
        d= num % 10;
        if(d % 2 != 0){
            prod= prod * d;
        }
        num= num/10;
    }

    
    printf("The products of the odd digits is %d", prod);
    getchar();
    getchar();

    return 0;
}