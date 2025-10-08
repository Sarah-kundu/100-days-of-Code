#include <stdio.h>
int main(){

    float cp, sp, L, P;

    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);

    if (cp < sp) {
        P= (sp - cp) / cp * 100;
        printf("This is profit \n");
        printf("The profit percentage is %f%%\n", P);
    }

    else if (cp > sp) {
        L= (cp - sp) / cp * 100;
        printf("This is Loss \n");
        printf("The loss percentage is %f%% \n", L);
    }

    else {
        printf("NO profit no loss.");
    }

    getchar();
    getchar();

    return 0;

}