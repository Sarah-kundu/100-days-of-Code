#include <stdio.h>
#include <math.h> // for sqrt() function

int main() {
    float a, b, c;
    float disc, r1, r2, realr, imagr;

    
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = b * b - 4 * a * c;
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
    }
    else {
        if (disc > 0) {
            r1 = (-b + sqrt(disc)) / (2 * a);
            r2 = (-b - sqrt(disc)) / (2 * a);
            printf("Roots are real and distinct.\n");
        }
        else if (disc == 0) {
            r1 = -b / (2 * a);
            printf("Roots are real and equal.\n");
        }
        else {
            realr = -b / (2 * a);
            imagr = sqrt(-disc) / (2 * a);
            printf("Roots are imaginary (complex).\n");
        }
    }

    return 0;
}
