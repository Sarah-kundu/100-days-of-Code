#include <stdio.h>
int main(){
    int a,b,c;
    printf("Take 3 digits");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("%d is the greatest", a);

        }

    }
    else {
        if (b > c )
            printf("%d is the greatest.", b);
        else 
            printf("%d is the greatest.", c);
    
    }

    getchar();
    getchar();
}