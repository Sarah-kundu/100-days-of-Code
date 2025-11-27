#include <stdio.h>

int main() {
    long binary, ones = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while (binary > 0) {
        digit = binary % 10;        
        
        if (digit == 0)
            ones = ones + 1 * place;
        else
            ones = ones + 0 * place;

        place = place * 10;      
        binary = binary / 10;    
    }

    printf("1's complement = %ld\n", ones);

    getchar();
    getchar();

    return 0;
}
