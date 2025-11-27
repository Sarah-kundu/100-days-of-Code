#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200];
    char longest[50] = "";
    int maxLen = 0;

    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, start = 0;

    while (1) {
        if (sentence[i] == ' ' || sentence[i] == '\0' || sentence[i] == '\n') {
            int length = i - start;

            if (length > maxLen) {
                maxLen = length;
                strncpy(longest, &sentence[start], length);
                longest[length] = '\0';  
            }

            if (sentence[i] == '\0' || sentence[i] == '\n')
                break;

            start = i + 1; 
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    getchar();
    getchar();

    return 0;
}
