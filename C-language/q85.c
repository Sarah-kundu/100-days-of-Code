#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    int i, l=0;
    printf("enter a string");
    scanf("%c",&str);

    while(str[l] != '\0'){
        l++;
    }

    for(i= l-1; i>=0; i--);{
        printf("%c",str[i]);
    }

    getchar();
    getchar();

    return 0;

}