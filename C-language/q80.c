#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and cols of Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and cols of Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int a[10][10], b[10][10], m[10][10];

    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

        for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            m[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                m[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    getchar();
    getchar();

    return 0;
}
