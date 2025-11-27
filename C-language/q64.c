#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; 
    int d, i, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) 
        num = -num;    

    
    while (num > 0) {
        d = num % 10;      
        freq[d]++;         
        num /= 10;         
    }

    for (i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Most frequent digit: %d\n", maxDigit);
    printf("Occurs %d times\n", freq[maxDigit]);

    getchar();
    getchar();
    return 0;
}
