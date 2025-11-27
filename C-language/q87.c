#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int s=0, c=0, d=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i] !='\0'; i++){
        if(strcmp(str[i],' ')){
            s++;
        }
        else if ((str[i]>=0) && (str[i]<=9))
        d++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
                 (str[i] >= 'a' && str[i] <= 'z')) {
        
        }
        else {
            c++;
        }
    }

    printf("The Spaces: %c Digits: %c Specials: %c",s,d,c);

    getchar();
    getchar();

    return 0;
}