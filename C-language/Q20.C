#include <stdio.h>

int main() {
    float x, y, z;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &x, &y, &z);
    
    if (x == y && y == z) {
            printf("The triangle is Equilateral.\n");
    }
     else if (x == y || y == z || x == z) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
    } 
    
    getchar();
    getchar();

    return 0;
}
