#include <stdio.h>

int main() {
    char name[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ' && name[0] != '\n')
        printf("%c", name[0]);

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf("%c", name[i+1]);
        }
    }

    getchar();
    getchar();

    return 0;
}
