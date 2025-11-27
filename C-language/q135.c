#include <stdio.h>

enum Numbers { A = 10, B, C, D = 20, E };

int main() {
    printf("%d %d %d %d %d\n", A, B, C, D, E);

    getchar();
    getchar();
    return 0;
}
