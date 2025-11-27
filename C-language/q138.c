#include <stdio.h>

enum Color { RED, GREEN, BLUE, YELLOW };

int main() {
    enum Color c;
    for (c = RED; c <= YELLOW; c++) {
        printf("%d\n", c);
    }
    getchar();
    getchar();
    
    return 0;
}
