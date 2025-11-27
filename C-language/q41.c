#include<stdio.h>

int main(){
    
    int num, first, last, temp, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;           

    while (temp >= 10) {
        temp = temp / 10;       
        power = power * 10;     
    }
    first = temp;               

    
    num = num - first * power;  
    num = num - last;           
    num = num + first;          
    num = num + last * power;   

    printf("After swapping first and last digits: %d\n", num);

    

    getchar();
    getchar();

    return 0;
}