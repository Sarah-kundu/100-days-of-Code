#include <stdio.h>
int main(){
    char ch;

    printf("Enter a character ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The alphabet is a vowel.");
    }

    else {
        printf("The alphabet is a consonant.");
    }

    getchar();
    getchar();
    return 0;
}