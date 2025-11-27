#include <stdio.h>

enum Menu { ADD=1, SUBTRACT, MULTIPLY };

int main() {
    int choice, a=10, b=5;
    printf("1.Add\n2.Subtract\n3.Multiply\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD: printf("Sum = %d\n", a+b); break;
        case SUBTRACT: printf("Difference = %d\n", a-b); break;
        case MULTIPLY: printf("Product = %d\n", a*b); break;
        default: printf("Invalid choice\n");
    }

    getchar();
    getchar();
    
    return 0;
}
