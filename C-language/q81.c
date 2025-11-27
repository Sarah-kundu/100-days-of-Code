#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    int i = 0;
    while (str[i] != '\0') { 
        count++;
        i++;
    }

    printf("Number of characters = %d\n", count);

    getchar();
    getchar();
    return 0;
}
