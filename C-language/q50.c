#include <stdio.h>

int main() {
    int i, j;
    for (i = 5; i >= 1; i--) {
        for(int space=5; space > i; space--){
        printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); 
    }

    getchar();
    getchar();
    return 0;
}
