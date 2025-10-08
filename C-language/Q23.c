#include <stdio.h>
int main() {
    int days,fine=0;

    printf("Enter the number of days:");
    scanf("%d", &days);

    if (days <= 5) {
        fine= days * 2;
        printf("The fine is %d", fine);
    }
    else if (5 < days <= 10) {
        fine= 10 + ((days - 5) * 4);
        printf("The fine is %d", fine);
    }

    else if (10 < days <= 30) {
        fine= (30) + ((days - 10) * 6);
        printf("The fine is %d", fine);

    }

    else {
        printf("The membership is cancelled.");
    }

    getchar();
    getchar();

    return 0;

}