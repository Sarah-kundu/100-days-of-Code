#include <stdio.h>

int main() {
    int i, n;
    float numerator = 1, denominator = 2, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (numerator / denominator);   
        numerator = numerator + 2;               
        denominator = denominator + 2;           
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
