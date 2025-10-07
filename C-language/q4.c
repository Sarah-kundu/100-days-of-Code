#include <stdio.h>
int main() {
    int r;
    printf("The radius is ");
    scanf("%d", &r);

    float x,y;
    
    x= 2*3.14*r;
    y=3.14*r*r;

    printf("The circumference of the cirlce is %f \n", x);
    printf("The area of the circle is %f \n", y);
    
    getchar();
    getchar();

    return 0;
}