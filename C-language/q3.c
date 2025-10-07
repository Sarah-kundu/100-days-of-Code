#include <stdio.h>
int main() {
    int a,b;
    printf("The length of rectangle is ");
    scanf("%d", &a);
    printf("The breadth of rectangle is ");
    scanf("%d", &b);

    int x,y;
    x=2 * (a+b);
    y=a * b;

    printf("The perimeter of the rectangle is %d \n", x);
    printf("The area of the rectangle is %d \n", y);

    getchar();
    getchar();

    return 0;
}