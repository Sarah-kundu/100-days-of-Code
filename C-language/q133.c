#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month m = FEB;

    switch (m) {
        case FEB: printf("28 or 29 days\n"); break;
        case APR:
        case JUN:
        case SEP:
        case NOV: printf("30 days\n"); break;
        default:  printf("31 days\n");
    }

    getchar();
    getchar();
    return 0;
}
