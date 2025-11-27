#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char surname[50];
    int lastStart = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);

    
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastStart = i + 1;
    }

    int j = 0;
    while (name[lastStart] != '\0' && name[lastStart] != '\n') {
        surname[j++] = name[lastStart++];
    }
    surname[j] = '\0';

    if (name[0] != ' ' && name[0] != '\n')
        printf("%c ", name[0]);

    for (int i = 1; i < lastStart - 1; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\n')
            printf("%c ", name[i+1]);
    }
    printf("%s\n", surname);

    return 0;
}
