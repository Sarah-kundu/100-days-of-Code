#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    enum Light l = RED;

    switch (l) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN:  printf("Go\n"); break;
    }
    getchar();
    getchar();
    return 0;
}
