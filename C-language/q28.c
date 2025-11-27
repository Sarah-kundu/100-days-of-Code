#include <stdio.h>
int main (){
    int n;
    int prod=1;
    printf("Enter number:");
    scanf("%d", &n);

    for (int i=2; i<=n; i++){
        if (i % 2 == 0) {
            prod= prod * i;

        }
    }
    printf("The product is %d", prod);

    getchar();
    getchar();

    return 0;
}