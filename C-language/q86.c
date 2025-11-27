#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "level";
    int i, n = strlen(str), flag = 1;
    for (i=0; i<n/2; i++) {
        if (str[i] != str[n-i-1]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("Palindrome\n");
    }
    else {
        printf("Not a palindrome\n");
    }

    getchar();
    getchar();

    return 0;