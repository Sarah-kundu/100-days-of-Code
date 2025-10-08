#include <stdio.h>
int main() {
    int units,bill=0;

    printf("Enter the number of units:");
    scanf("%d", &units);

    if (units <= 100) {
        bill= units * 5;
        printf("The bill is %d", bill);
    }
    else if (100 < units <= 200) {
        bill= (100 * 5) + ((units - 100) * 7);
        printf("The bill is %d", bill);
    }

    else if (200 < units <= 300) {
        bill= (100 * 5) + (100 * 7) + ((units - 200) * 10);
        printf("The bill is %d", bill);

    }

    else {
        bill= (100 * 5) + (100 * 7) + (100 * 10) + ((units-300) * 12);
        printf("The bill is %d.", bill);
    }

    getchar();
    getchar();

    return 0;

}