#include<stdio.h>
int main() {
    int num1, num2, result;
    char operator;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero.\n");
            } else {
                result = num1 / num2; // Integer division
            }
            break;

        case '%':
            if (num2 == 0) {
                 printf("Error: Cannot perform modulo with zero divisor.\n");
            } 
            else {
                 result = num1 % num2;
            }
            break;
        
        printf("\nResult: %d %c %d = %d\n", num1, operator, num2, result);
    }

    getchar();
    getchar();
    
    return 0;
}