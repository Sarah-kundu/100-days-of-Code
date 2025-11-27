#include <stdio.h>

int main() {
    int i, n;
    float numerator = 2, denominator = 3, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (numerator / denominator);   
        numerator = numerator + 2;               
        denominator = denominator + 4;           
    }

    printf("Sum of the series = %.4f\n", sum);

    getchar();
    getchar();
    
    return 0;
}
