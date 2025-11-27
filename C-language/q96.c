#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];

    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, start = 0;

    while (1) {
        
        if (sentence[i] == ' ' || sentence[i] == '\0' || sentence[i] == '\n') {
            reverse(sentence, start, i - 1);

            if (sentence[i] == '\0' || sentence[i] == '\n')
                break;

            start = i + 1;  
        }
        i++;
    }

    printf("Output: %s", sentence);

    getchar();
    getchar();

    return 0;
}
